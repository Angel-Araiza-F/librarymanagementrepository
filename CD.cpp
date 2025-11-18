#include "cd.h"

CD::CD(string t, string a, string al, int year)
    : title(t), artist(a), album(al), publicationYear(year) {}

string CD::getAlbum() const {
    return album;
}

string CD::getTitle() const {
    return title;
}

void CD::printInfo() const {
    cout << "Title: " << title
         << " | Artist: " << artist
         << " | Album: " << album
         << " | Year: " << publicationYear
         << endl;
}