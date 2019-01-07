/********************************************************************************
** Form generated from reading UI file 'player.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Player
{
public:
    QAction *actionChoose_music_directory;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QListWidget *songList;
    QVBoxLayout *verticalLayout_3;
    QLabel *nowPlayingLabel;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSlider *durationSlider;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QSlider *volumeSlider;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *playButton;
    QPushButton *muteButton;
    QPushButton *prevButton;
    QPushButton *nextButton;
    QPushButton *shuffleButton;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Player)
    {
        if (Player->objectName().isEmpty())
            Player->setObjectName(QStringLiteral("Player"));
        Player->resize(542, 377);
        actionChoose_music_directory = new QAction(Player);
        actionChoose_music_directory->setObjectName(QStringLiteral("actionChoose_music_directory"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/directory.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChoose_music_directory->setIcon(icon);
        centralWidget = new QWidget(Player);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout_4 = new QVBoxLayout(centralWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout_2->addWidget(label_3);

        songList = new QListWidget(centralWidget);
        songList->setObjectName(QStringLiteral("songList"));
        songList->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));

        verticalLayout_2->addWidget(songList);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        nowPlayingLabel = new QLabel(centralWidget);
        nowPlayingLabel->setObjectName(QStringLiteral("nowPlayingLabel"));

        verticalLayout_4->addWidget(nowPlayingLabel, 0, Qt::AlignHCenter);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        durationSlider = new QSlider(centralWidget);
        durationSlider->setObjectName(QStringLiteral("durationSlider"));
        durationSlider->setMaximum(100);
        durationSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(durationSlider);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(7, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        volumeSlider = new QSlider(centralWidget);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setMaximum(100);
        volumeSlider->setSliderPosition(50);
        volumeSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(volumeSlider);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        playButton = new QPushButton(centralWidget);
        playButton->setObjectName(QStringLiteral("playButton"));

        horizontalLayout_4->addWidget(playButton);

        muteButton = new QPushButton(centralWidget);
        muteButton->setObjectName(QStringLiteral("muteButton"));

        horizontalLayout_4->addWidget(muteButton);

        prevButton = new QPushButton(centralWidget);
        prevButton->setObjectName(QStringLiteral("prevButton"));

        horizontalLayout_4->addWidget(prevButton);

        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));

        horizontalLayout_4->addWidget(nextButton);

        shuffleButton = new QPushButton(centralWidget);
        shuffleButton->setObjectName(QStringLiteral("shuffleButton"));

        horizontalLayout_4->addWidget(shuffleButton);


        verticalLayout_4->addLayout(horizontalLayout_4);

        Player->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Player);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 542, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        Player->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Player);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Player->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Player);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Player->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(songList);
        label->setBuddy(durationSlider);
        label_2->setBuddy(volumeSlider);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionChoose_music_directory);
        mainToolBar->addAction(actionChoose_music_directory);

        retranslateUi(Player);

        QMetaObject::connectSlotsByName(Player);
    } // setupUi

    void retranslateUi(QMainWindow *Player)
    {
        Player->setWindowTitle(QApplication::translate("Player", "Player", nullptr));
        actionChoose_music_directory->setText(QApplication::translate("Player", "Import library", nullptr));
        label_3->setText(QApplication::translate("Player", "Songs:", nullptr));
        nowPlayingLabel->setText(QApplication::translate("Player", "Now Playing: ", nullptr));
        label->setText(QApplication::translate("Player", "Duration", nullptr));
        label_2->setText(QApplication::translate("Player", "Volume", nullptr));
        playButton->setText(QApplication::translate("Player", "Play", nullptr));
        muteButton->setText(QApplication::translate("Player", "Mute", nullptr));
        prevButton->setText(QApplication::translate("Player", "Prev", nullptr));
        nextButton->setText(QApplication::translate("Player", "Next", nullptr));
        shuffleButton->setText(QApplication::translate("Player", "Shuffle", nullptr));
        menuFile->setTitle(QApplication::translate("Player", "Import", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Player: public Ui_Player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
