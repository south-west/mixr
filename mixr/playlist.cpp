#include "playlist.h"
#include "song.h"
#include "ui_player.h"

#include "QFile"
#include "QDir"
#include "QDebug"
#include "vector"

Playlist::Playlist(QString musicDir)
{
    QDir musicFolder(musicDir);
    foreach (QFileInfo curr, musicFolder.entryInfoList()) {
        if (curr.QFileInfo::suffix() == "mp3") {
            Song* currSong = new Song();
            currSong->setSongName(curr.fileName().section(".",0,0));
            currSong->setFileLocation(curr.absoluteFilePath());
            qDebug() << currSong->getSongName() << currSong->getFileLocation();
            userPlaylist.push_back(currSong);
       }
    }
}

Playlist::~Playlist()
{
    foreach (Song* curr, userPlaylist) {
        delete curr;
    }
}

Song* Playlist::operator[](size_t i) const {return userPlaylist[i];}
size_t Playlist::length() const {return userPlaylist.size();}
