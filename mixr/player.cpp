#include "player.h"
#include "song.h"
#include "playlist.h"
#include "ui_player.h"

#include "qmediaplayer.h"
#include "QListWidgetItem"
#include "QFileDialog"
#include "QDebug"
#include "QDir"

Player::Player(QWidget *parent)  :
    QMainWindow(parent),
    ui(new Ui::Player)
{
    ui->setupUi(this);
    setWindowTitle("mixr");
    audioPlayer = new QMediaPlayer(this, QMediaPlayer::StreamPlayback);
    connect(audioPlayer, &QMediaPlayer::positionChanged, this, &Player::on_positionChanged);
    connect(audioPlayer, &QMediaPlayer::durationChanged, this, &Player::on_durationChanged);
}

Player::~Player()
{
    delete ui;
    delete audioPlayer;
}

void Player::on_playButton_clicked()
{
    if (audioPlayer->isAudioAvailable()) {
        if (audioPlayer->state() == QMediaPlayer::PlayingState) {
            audioPlayer->pause();
            ui->playButton->setText("Play");
        }
        else {
            audioPlayer->play();
            ui->nowPlayingLabel->setText("Now Playing: " + userPlaylist[trackIndex]->getSongName());
            ui->playButton->setText("Pause");     
        }
    }
    else if (userPlaylist.length() > 0) {
        trackIndex = 0;
        audioPlayer->setMedia(QUrl::fromLocalFile(userPlaylist[trackIndex]->getFileLocation()));
        ui->nowPlayingLabel->setText("Now Playing: " + userPlaylist[trackIndex]->getSongName());
        audioPlayer->play();
        ui->playButton->setText("Pause");
    }
}

void Player::on_durationSlider_sliderMoved(int position)
{
    audioPlayer->setPosition(position);
}

void Player::on_volumeSlider_sliderMoved(int position)
{
    audioPlayer->setVolume(position);
    if (position == 0) {
        ui->muteButton->setText("Unmute");
    }
    else {
        ui->muteButton->setText("Mute");
    }
}

void Player::on_positionChanged(qint64 position)
{
    ui->durationSlider->setValue(position);
    if (audioPlayer->duration() == position && position != 0) {
        if (trackIndex < userPlaylist.length() - 1) {
            trackIndex += 1;
            audioPlayer->setMedia(QUrl::fromLocalFile(userPlaylist[trackIndex]->getFileLocation()));
            ui->nowPlayingLabel->setText("Now Playing: " + userPlaylist[trackIndex]->getSongName());
            audioPlayer->play();
        }
        else {
            trackIndex = 0;
            audioPlayer->setMedia(QUrl::fromLocalFile(userPlaylist[trackIndex]->getFileLocation()));
            ui->nowPlayingLabel->setText("Now Playing: " + userPlaylist[trackIndex]->getSongName());
            audioPlayer->play();
        }
    }
}

void Player::on_durationChanged(qint64 position)
{
    ui->durationSlider->setMaximum(position);
}

void Player::on_songList_itemClicked(QListWidgetItem *item)
{
    trackIndex = item->data(Qt::UserRole).toInt();
    audioPlayer->setMedia
            (QUrl::fromLocalFile((userPlaylist[trackIndex]->getFileLocation())));
    ui->nowPlayingLabel->setText("Now Playing: " + userPlaylist[trackIndex]->getSongName());
    audioPlayer->play();
    ui->playButton->setText("Pause");
}

void Player::on_actionChoose_music_directory_triggered()
{
    QString fileDir = QFileDialog::getExistingDirectory
            (this, "Import", QDir::homePath());
    setUp(fileDir);
}

void Player::setUp(QString dir) {
    Playlist temp(dir);
    userPlaylist = temp;
    for (size_t i = 0; i < userPlaylist.length(); ++i) {
        QListWidgetItem *newItem = new QListWidgetItem;
        newItem->setData(Qt::UserRole,i);
        newItem->setText(userPlaylist[i]->getSongName());
        ui->songList->insertItem(i, newItem);
    }
}

void Player::on_muteButton_clicked() {
    if (audioPlayer->volume() != 0) {
        audioPlayer->setVolume(0);
        ui->muteButton->setText("Unmute");
    }
    else {
       audioPlayer->setVolume(ui->volumeSlider->value());
       ui->muteButton->setText("Mute");
    }
}



void Player::on_nextButton_clicked()
{
    if (trackIndex == userPlaylist.length() - 1) {
        trackIndex = 0;
    }
    else {
        trackIndex +=1;
    }
    audioPlayer->setMedia
            (QUrl::fromLocalFile((userPlaylist[trackIndex]->getFileLocation())));
    ui->nowPlayingLabel->setText("Now Playing: " + userPlaylist[trackIndex]->getSongName());
    audioPlayer->play();
    ui->playButton->setText("Pause");
}

void Player::on_prevButton_clicked()
{
    if (trackIndex == 0) {
        trackIndex = userPlaylist.length() - 1;
    }
    else {
        trackIndex -=1;
    }
    audioPlayer->setMedia
            (QUrl::fromLocalFile((userPlaylist[trackIndex]->getFileLocation())));
    ui->nowPlayingLabel->setText("Now Playing: " + userPlaylist[trackIndex]->getSongName());
    audioPlayer->play();
    ui->playButton->setText("Pause");
}
