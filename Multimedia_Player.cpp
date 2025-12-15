#include <iostream>
using namespace std;

class MediaFile {
public:
    virtual void play() = 0;
};

class Audio : public MediaFile {
public:
    void play() { cout << "Playing Audio" << endl; }
};

class Video : public MediaFile {
public:
    void play() { cout << "Playing Video" << endl; }
};

class Image : public MediaFile {
public:
    void play() { cout << "Showing Image" << endl; }
};

int main() {
    MediaFile* m[3];
    Audio a;
    Video v;
    Image i;

    m[0] = &a;
    m[1] = &v;
    m[2] = &i;

    for(int x = 0; x < 3; x++)
        m[x]->play();
}
