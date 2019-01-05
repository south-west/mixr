#ifndef PLAYER_H
#define PLAYER_H

#include <QMainWindow>
#include <QMediaPlayer>

namespace Ui {
class Player;
}

class Player : public QMainWindow
{
    Q_OBJECT

public:
    explicit Player(QWidget *parent = nullptr);
    ~Player();

private slots:
    void on_playButton_clicked();

    void on_durationSlider_sliderMoved(int position);

    void on_volumeSlider_sliderMoved(int position);

    void on_positionChanged(qint64 position);

    void on_durationChanged(qint64 position);
private:
    Ui::Player *ui;
    QMediaPlayer* audioPlayer;
};

#endif // PLAYER_H
