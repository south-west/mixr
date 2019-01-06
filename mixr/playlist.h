#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "song.h"
#include <vector>

class Playlist
{
public:
    Playlist(QString musicDir = "C://");
    ~Playlist();
    Song* operator[](size_t i) const;
    size_t length() const;
private:
    std::vector<Song*> userPlaylist;
};

#endif // PLAYLIST_H