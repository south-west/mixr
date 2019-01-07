#include "playlist.h"
#include "song.h"

#include "QFile"
#include "QDir"
#include "QDebug"
#include "vector"
#include <algorithm>

Playlist::Playlist(QString musicDir)
{
    addDirectory(musicDir);
}

Playlist::~Playlist()
{
    foreach (Song* curr, userPlaylist) {
        delete curr;
    }
}

Playlist& Playlist::operator=(const Playlist &rhs)
{
    if  (this != &rhs) {
        foreach (Song* curr, userPlaylist) {
            delete curr;
        }
        userPlaylist.clear();
        foreach (Song* curr, rhs.userPlaylist) {
            userPlaylist.push_back(new Song(*curr));
        }
    }
    return *this;
}

Song* Playlist::operator[](size_t i) const {return userPlaylist[i];}
size_t Playlist::length() const {return userPlaylist.size();}

void Playlist::randomize() {
    std::random_shuffle(userPlaylist.begin(), userPlaylist.end());
}

void Playlist::addDirectory(QString musicDir)
{
    QDir musicFolder(musicDir);
    foreach (QFileInfo curr, musicFolder.entryInfoList()) {
        if (curr.QFileInfo::suffix() == "mp3" || curr.QFileInfo::suffix() == "mp4") {
            Song* currSong = new Song();
            currSong->setSongName(curr.fileName().section(".",0,0));
            currSong->setFileLocation(curr.absoluteFilePath());
            userPlaylist.push_back(currSong);
       }
    }
}
