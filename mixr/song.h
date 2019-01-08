#ifndef SONG_H
#define SONG_H

#include "QString"

class Song
{
public:
    Song();

    QString getFileLocation() const;

    QString getSongName() const;

    void setFileLocation(QString loc);

    void setSongName(QString name);
private:
    QString location;
    QString songName;
};

#endif // SONG_H
