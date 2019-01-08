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
    QAction *actionAdd_new_library;
    QAction *actionClear_library;
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
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *Player)
    {
        if (Player->objectName().isEmpty())
            Player->setObjectName(QStringLiteral("Player"));
        Player->resize(542, 377);
        Player->setStyleSheet(QLatin1String("/*QWidget {\n"
"  background-color: #32414B  ;\n"
"}*/\n"
"\n"
"QMainWindow::separator {\n"
"    background-color: #32414B;\n"
"    border: 0 solid #19232D;\n"
"    spacing: 0;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QMainWindow::separator:hover {\n"
"    background-color: #505F69;\n"
"    border: 0px solid #148CD2;\n"
"}\n"
"\n"
"QMainWindow::separator:horizontal {\n"
"    width: 5px;\n"
"    margin-top: 2px;\n"
"    margin-bottom: 2px;\n"
"}\n"
"\n"
"QMainWindow::separator:vertical {\n"
"    height: 5px;\n"
"    margin-left: 2px;\n"
"    margin-right: 2px;\n"
"}\n"
""));
        actionChoose_music_directory = new QAction(Player);
        actionChoose_music_directory->setObjectName(QStringLiteral("actionChoose_music_directory"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/directory.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionChoose_music_directory->setIcon(icon);
        actionAdd_new_library = new QAction(Player);
        actionAdd_new_library->setObjectName(QStringLiteral("actionAdd_new_library"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/addDirectory.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAdd_new_library->setIcon(icon1);
        actionClear_library = new QAction(Player);
        actionClear_library->setObjectName(QStringLiteral("actionClear_library"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/clear.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear_library->setIcon(icon2);
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
        label_3->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: #32414B;\n"
"    border: 0px solid #32414B;\n"
"    padding: 2px;\n"
"    margin: 0px;\n"
"    color: #F0F0F0\n"
"}\n"
"\n"
"QLabel::disabled {\n"
"    background-color: #32414B;\n"
"    border: 0px solid #32414B;\n"
"    color: #787878;\n"
"}"));

        verticalLayout_2->addWidget(label_3);

        songList = new QListWidget(centralWidget);
        songList->setObjectName(QStringLiteral("songList"));
        songList->viewport()->setProperty("cursor", QVariant(QCursor(Qt::PointingHandCursor)));
        songList->setStyleSheet(QLatin1String("QListView {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #32414B;\n"
"    color: #F0F0F0;\n"
"    gridline-color: #32414B;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QListView:hover {\n"
"    background-color: #19232D;\n"
"    border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QListView::item:pressed {\n"
"    background-color: #1464A0;\n"
"}\n"
"\n"
"\n"
"/* SCROLL AREA */\n"
"\n"
"QScrollBar:horizontal {\n"
"    height: 16px;\n"
"    margin: 2px 16px 2px 16px;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"    background-color: #19232D;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"    background-color: #787878;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"    min-width: 8px;\n"
"\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal:hover {\n"
"    background-color: #148CD2;\n"
"    border: 1px solid #148CD2;\n"
"    border-radius: 4px;\n"
"    min-width: 8px;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    margin: 0px 0px 0px 0px;\n"
"    width: 10px;\n"
""
                        "    height: 10px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
" 	background-color: #787878;\n"
"    margin: 0px 3px 0px 3px;\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal:hover,\n"
"QScrollBar::add-line:horizontal:on {\n"
"	background-color: #148CD2;\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: right;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal:hover,\n"
"QScrollBar::sub-line:horizontal:on {\n"
"	background-color: #148CD2;\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: left;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:horizontal,\n"
"QScrollBar::down-arrow:horizontal {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizontal,\n"
"QScrollBar::sub-page:horizontal {\n"
"    background: none;\n"
""
                        "}\n"
"\n"
"QScrollBar:vertical {\n"
"    background-color: #19232D;\n"
"    width: 16px;\n"
"    margin: 16px 2px 16px 2px;\n"
"    border: 1px solid #32414B;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical {\n"
"    background-color: #787878;\n"
"    border: 1px solid #32414B;\n"
"    min-height: 8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QScrollBar::handle:vertical:hover {\n"
"    background-color: #148CD2;\n"
"    border: 1px solid #148CD2;\n"
"    border-radius: 4px;\n"
"    min-height: 8px;\n"
"\n"
"}\n"
"\n"
"QScrollBar::sub-line:vertical {\n"
"	background-color: #787878;\n"
"    margin: 3px 0px 3px 0px;\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical {\n"
"	background-color: #787878;\n"
"    margin: 3px 0px 3px 0px;\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:vert"
                        "ical:hover,\n"
"QScrollBar::sub-line:vertical:on {\n"
"	background-color: #148CD2;\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: top;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::add-line:vertical:hover,\n"
"QScrollBar::add-line:vertical:on {\n"
"	background-color: #148CD2;\n"
"    height: 10px;\n"
"    width: 10px;\n"
"    subcontrol-position: bottom;\n"
"    subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:vertical,\n"
"QScrollBar::down-arrow:vertical {\n"
"    background: none;\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical,\n"
"QScrollBar::sub-page:vertical {\n"
"    background: none;\n"
"}"));

        verticalLayout_2->addWidget(songList);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));

        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        nowPlayingLabel = new QLabel(centralWidget);
        nowPlayingLabel->setObjectName(QStringLiteral("nowPlayingLabel"));
        nowPlayingLabel->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: #32414B;\n"
"    border: 0px solid #32414B;\n"
"    padding: 2px;\n"
"    margin: 0px;\n"
"    color: #F0F0F0\n"
"}\n"
"\n"
"QLabel::disabled {\n"
"    background-color: #32414B;\n"
"    border: 0px solid #32414B;\n"
"    color: #787878;\n"
"}"));

        verticalLayout_4->addWidget(nowPlayingLabel, 0, Qt::AlignHCenter|Qt::AlignVCenter);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: #32414B;\n"
"    border: 0px solid #32414B;\n"
"    padding: 2px;\n"
"    margin: 0px;\n"
"    color: #F0F0F0\n"
"}\n"
"\n"
"QLabel::disabled {\n"
"    background-color: #32414B;\n"
"    border: 0px solid #32414B;\n"
"    color: #787878;\n"
"}"));

        horizontalLayout->addWidget(label);

        durationSlider = new QSlider(centralWidget);
        durationSlider->setObjectName(QStringLiteral("durationSlider"));
        durationSlider->setAutoFillBackground(false);
        durationSlider->setStyleSheet(QLatin1String("QSlider:disabled {\n"
"    background: #19232D;\n"
"}\n"
"\n"
"QSlider:focus {\n"
"    border: none;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background: #32414B;\n"
"    border: 1px solid #32414B;\n"
"    height: 4px;\n"
"    margin: 0px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #1464A0;\n"
"    border: 1px solid #32414B;\n"
"    height: 4px;\n"
"    margin: 0px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #14506E;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: #787878;\n"
"    border: 1px solid #32414B;\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: #148CD2;\n"
"    border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    background: #32414B;\n"
"    border: 1px solid #32414B;\n"
"    width: 4px;\n"
"    margin: 0px;\n"
"    border-radiu"
                        "s: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #1464A0;\n"
"    border: 1px solid #32414B;\n"
"    width: 4px;\n"
"    margin: 0px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #14506E;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #787878;\n"
"    border: 1px solid #32414B;\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    margin: 0 -8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: #148CD2;\n"
"    border: 1px solid #148CD2;\n"
"}"));
        durationSlider->setMaximum(100);
        durationSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(durationSlider);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: #32414B;\n"
"    border: 0px solid #32414B;\n"
"    padding: 2px;\n"
"    margin: 0px;\n"
"    color: #F0F0F0\n"
"}\n"
"\n"
"QLabel::disabled {\n"
"    background-color: #32414B;\n"
"    border: 0px solid #32414B;\n"
"    color: #787878;\n"
"}"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer = new QSpacerItem(7, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        volumeSlider = new QSlider(centralWidget);
        volumeSlider->setObjectName(QStringLiteral("volumeSlider"));
        volumeSlider->setStyleSheet(QLatin1String("QSlider:disabled {\n"
"    background: #19232D;\n"
"}\n"
"\n"
"QSlider:focus {\n"
"    border: none;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background: #32414B;\n"
"    border: 1px solid #32414B;\n"
"    height: 4px;\n"
"    margin: 0px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: #1464A0;\n"
"    border: 1px solid #32414B;\n"
"    height: 4px;\n"
"    margin: 0px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal:disabled {\n"
"    background: #14506E;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"    background: #787878;\n"
"    border: 1px solid #32414B;\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover {\n"
"    background: #148CD2;\n"
"    border: 1px solid #148CD2;\n"
"}\n"
"\n"
"QSlider::groove:vertical {\n"
"    background: #32414B;\n"
"    border: 1px solid #32414B;\n"
"    width: 4px;\n"
"    margin: 0px;\n"
"    border-radiu"
                        "s: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical {\n"
"    background: #1464A0;\n"
"    border: 1px solid #32414B;\n"
"    width: 4px;\n"
"    margin: 0px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::sub-page:vertical:disabled {\n"
"    background: #14506E;\n"
"}\n"
"\n"
"QSlider::handle:vertical {\n"
"    background: #787878;\n"
"    border: 1px solid #32414B;\n"
"    width: 8px;\n"
"    height: 8px;\n"
"    margin: 0 -8px;\n"
"    border-radius: 4px;\n"
"}\n"
"\n"
"QSlider::handle:vertical:hover {\n"
"    background: #148CD2;\n"
"    border: 1px solid #148CD2;\n"
"}"));
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
        playButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   	background-color: #19232D;\n"
"    border: 1px solid #19232D;\n"
"    color: #F0F0F0;\n"
"    border-radius: 4px;\n"
"    padding: 3px;\n"
"    outline: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"    border: 1px solid #148CD2;\n"
"    color: #F0F0F0;\n"
"}\n"
""));

        horizontalLayout_4->addWidget(playButton);

        muteButton = new QPushButton(centralWidget);
        muteButton->setObjectName(QStringLiteral("muteButton"));
        muteButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   	background-color: #19232D;\n"
"    border: 1px solid #19232D;\n"
"    color: #F0F0F0;\n"
"    border-radius: 4px;\n"
"    padding: 3px;\n"
"    outline: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"    border: 1px solid #148CD2;\n"
"    color: #F0F0F0;\n"
"}"));

        horizontalLayout_4->addWidget(muteButton);

        prevButton = new QPushButton(centralWidget);
        prevButton->setObjectName(QStringLiteral("prevButton"));
        prevButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   	background-color: #19232D;\n"
"    border: 1px solid #19232D;\n"
"    color: #F0F0F0;\n"
"    border-radius: 4px;\n"
"    padding: 3px;\n"
"    outline: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"    border: 1px solid #148CD2;\n"
"    color: #F0F0F0;\n"
"}"));

        horizontalLayout_4->addWidget(prevButton);

        nextButton = new QPushButton(centralWidget);
        nextButton->setObjectName(QStringLiteral("nextButton"));
        nextButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   	background-color: #19232D;\n"
"    border: 1px solid #19232D;\n"
"    color: #F0F0F0;\n"
"    border-radius: 4px;\n"
"    padding: 3px;\n"
"    outline: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"    border: 1px solid #148CD2;\n"
"    color: #F0F0F0;\n"
"}"));

        horizontalLayout_4->addWidget(nextButton);

        shuffleButton = new QPushButton(centralWidget);
        shuffleButton->setObjectName(QStringLiteral("shuffleButton"));
        shuffleButton->setStyleSheet(QLatin1String("QPushButton {\n"
"   	background-color: #19232D;\n"
"    border: 1px solid #19232D;\n"
"    color: #F0F0F0;\n"
"    border-radius: 4px;\n"
"    padding: 3px;\n"
"    outline: none;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"    border: 1px solid #148CD2;\n"
"    color: #F0F0F0;\n"
"}"));

        horizontalLayout_4->addWidget(shuffleButton);


        verticalLayout_4->addLayout(horizontalLayout_4);

        Player->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Player);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 542, 21));
        menuBar->setStyleSheet(QLatin1String("background-color: #32414B;\n"
"color: white;"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        Player->setMenuBar(menuBar);
        statusBar = new QStatusBar(Player);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Player->setStatusBar(statusBar);
        mainToolBar = new QToolBar(Player);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setStyleSheet(QLatin1String("QToolBar {\n"
"    background-color: #32414B;\n"
"    border-bottom: 1px solid #19232D;\n"
"    padding: 2px;\n"
"    font-weight: bold;\n"
"}\n"
"\n"
"\n"
"QToolBar::handle:horizontal {\n"
"    width: 6px;\n"
"	background-color: #32414B;\n"
"}\n"
"\n"
"QToolBar::handle:vertical {\n"
"    height: 6px;\n"
" 	background-color: #32414B;\n"
"}"));
        mainToolBar->setAllowedAreas(Qt::TopToolBarArea);
        Player->addToolBar(Qt::TopToolBarArea, mainToolBar);
#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(songList);
        label->setBuddy(durationSlider);
        label_2->setBuddy(volumeSlider);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionAdd_new_library);
        menuFile->addAction(actionClear_library);
        mainToolBar->addAction(actionAdd_new_library);
        mainToolBar->addAction(actionClear_library);

        retranslateUi(Player);

        QMetaObject::connectSlotsByName(Player);
    } // setupUi

    void retranslateUi(QMainWindow *Player)
    {
        Player->setWindowTitle(QApplication::translate("Player", "Player", nullptr));
        actionChoose_music_directory->setText(QApplication::translate("Player", "Import library", nullptr));
        actionAdd_new_library->setText(QApplication::translate("Player", "Add new library", nullptr));
        actionClear_library->setText(QApplication::translate("Player", "Clear library", nullptr));
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
