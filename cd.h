#ifndef CD_H
#define CD_H

#include <string>
#include <iostream>

using namespace std;

class CD {
private:
    string title;
    string artist;
    string album;
    int publicationYear;

public:
    CD(string t, string a, string al, int year);
    string getAlbum() const;
    string getTitle() const;
    void printInfo() const;
};