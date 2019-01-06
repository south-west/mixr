#include "player.h"
#include "playlist.h"
#include "ui_player.h"

#include "qmediaplayer.h"
#include "QListWidgetItem"
#include "QFileDialog"
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
    if (audioPlayer->QMediaPlayer::isAudioAvailable()) {
        if (audioPlayer->QMediaPlayer::state() == QMediaPlayer::PlayingState) {
            audioPlayer->pause();
            ui->playButton->setText("Play");
        }
        else {
            audioPlayer->play();
            ui->playButton->setText("Pause");
        }
    }
}

void Player::on_durationSlider_sliderMoved(int position)
{
    audioPlayer->setPosition(position);
}

void Player::on_volumeSlider_sliderMoved(int position)
{
    audioPlayer->setVolume(position);
}

void Player::on_positionChanged(qint64 position)
{
    ui->durationSlider->setValue(position);
}

void Player::on_durationChanged(qint64 position)
{
    ui->durationSlider->setMaximum(position);
}

void Player::on_songList_itemClicked(QListWidgetItem *item)
{
    audioPlayer->setMedia(QUrl::fromLocalFile((item->data(Qt::UserRole)).toString()));
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
        newItem->setData(Qt::UserRole,userPlaylist[i]->getFileLocation());
        newItem->setText(userPlaylist[i]->getSongName());
        ui->songList->insertItem(i, newItem);
    }
}
