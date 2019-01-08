#ifndef PLAYER_H
#define PLAYER_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QListWidgetItem>
#include "QDir"
#include "playlist.h"
#include "ui_player.h"

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
    void on_durationSlider_sliderMoved(int position);

    void on_volumeSlider_sliderMoved(int position);

    void on_positionChanged(qint64 position);

    void on_durationChanged(qint64 position);

    void on_playButton_clicked();

    void on_songList_itemClicked(QListWidgetItem *item);

    void on_muteButton_clicked();

    void on_nextButton_clicked();

    void on_prevButton_clicked();

    void on_shuffleButton_clicked();

    void on_actionClear_library_triggered();

    void on_actionAdd_new_library_triggered();

    void setUpWidgets(size_t row);
private:
    Ui::Player *ui;
    QMediaPlayer* audioPlayer;
    Playlist userPlaylist;
    size_t trackIndex;
};

#endif // PLAYER_H
