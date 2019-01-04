#ifndef PLAYSONG_H
#define PLAYSONG_H

#include <QMainWindow>
#include <QMediaPlayer>

namespace Ui {
class PlaySong;
}

class PlaySong : public QMainWindow
{
    Q_OBJECT

public:
    explicit PlaySong(QWidget *parent = nullptr);
    ~PlaySong();

private slots:
    void on_durationSlider_sliderMoved(int position);

    void on_volumeSlider_sliderMoved(int position);

    void on_durationChanged(qint64 position);

    void on_positionChanged(qint64 position);

    void on_playButton_clicked();

private:
    Ui::PlaySong* ui;
    QMediaPlayer* player;
};

#endif // PLAYSONG_H
