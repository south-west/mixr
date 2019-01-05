#include "player.h"
#include "ui_player.h"

#include "qmediaplayer.h"

Player::Player(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Player)
{
    ui->setupUi(this);
    setWindowTitle("mixr");
    audioPlayer = new QMediaPlayer(this);
    connect(audioPlayer, &QMediaPlayer::positionChanged, this, &Player::on_positionChanged);
    connect(audioPlayer, &QMediaPlayer::durationChanged, this, &Player::on_durationChanged);

    // Do this seperately
    audioPlayer->setMedia(QUrl::fromLocalFile("C:/Users/Fahmid/Desktop/Starman.mp3"));
}

Player::~Player()
{
    delete ui;
    delete audioPlayer;
}

void Player::on_playButton_clicked()
{
    if (audioPlayer->QMediaPlayer::state() == QMediaPlayer::PlayingState) {
        audioPlayer->pause();
        ui->playButton->setText("Play");
    }
    else {
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
}

void Player::on_positionChanged(qint64 position)
{
    ui->durationSlider->setValue(position);
}

void Player::on_durationChanged(qint64 position)
{
    ui->durationSlider->setMaximum(position);
}
