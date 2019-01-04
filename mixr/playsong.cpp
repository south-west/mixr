#include "playsong.h"
#include "ui_songplayer.h"

#include "QMediaPlayer"
#include "QDebug"
#include "QUrl"
#include "QFileInfo"

PlaySong::PlaySong(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PlaySong)
{
    ui->setupUi(this);
    setWindowTitle("miXr");
    player = new QMediaPlayer(this);

    QFileInfo fi("C:/Users/Fahmid/Desktop/Starman.mp3");
    player->setMedia(QUrl::fromLocalFile("C:/Users/Fahmid/Desktop/Starman.mp3"));
    //player->setMedia(QUrl::fromLocalFile("C:/Users/Fahmid/Desktop/Starman.mp3"));
    connect(player, &QMediaPlayer::positionChanged, this, &PlaySong::on_positionChanged);
    connect(player, &QMediaPlayer::durationChanged, this, &PlaySong::on_durationChanged);
}




PlaySong::~PlaySong()
{
    delete ui;
    delete player;
}

void PlaySong::on_playButton_clicked()
{
    if (player->QMediaPlayer::state() == QMediaPlayer::PlayingState) {
        player->pause();
    }
    else {
        player->play();
    }
}

void PlaySong::on_durationSlider_sliderMoved(int position)
{
    player->setPosition(position);
}

void PlaySong::on_volumeSlider_sliderMoved(int position)
{
    player->setVolume(position);
}

void PlaySong::on_positionChanged(qint64 position)
{
    ui->durationSlider->setValue(position);
}

void PlaySong::on_durationChanged(qint64 position)
{
    ui->durationSlider->setMaximum(position);
}
