#ifndef PLAYLIST_H
#define PLAYLIST_H

#include "song.h"
#include <vector>

class Playlist
{
public:
    Playlist(QString musicDir = "C://");
    ~Playlist();
    Playlist& operator=(const Playlist& rhs);
    Song* operator[](size_t i) const;
    size_t length() const;
    void randomize();
private:
    std::vector<Song*> userPlaylist;
};

#endif // PLAYLIST_H
