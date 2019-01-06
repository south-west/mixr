#include "song.h"

Song::Song() {}

QString Song::getFileLocation() const
{
    return location;
}

QString Song::getSongName() const
{
    return songName;
}

void Song::setFileLocation(QString loc)
{
    location = loc;
}

void Song::setSongName(QString name)
{
    songName = name;
}






