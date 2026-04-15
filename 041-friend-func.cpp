#include <iostream>
using namespace std;

class MediaPlayer {
public:
    virtual void play() = 0;
    virtual void pause() = 0;
    virtual void stop() = 0;
    virtual ~MediaPlayer() {}
};

class MusicPlayer : public MediaPlayer {
public:
    void play() override { cout << "Playing music..." << endl; }
    void pause() override { cout << "Music paused" << endl; }
    void stop() override { cout << "Music stopped" << endl; }
};

class VideoPlayer : public MediaPlayer {
public:
    void play() override { cout << "Playing video..." << endl; }
    void pause() override { cout << "Video paused" << endl; }
    void stop() override { cout << "Video stopped" << endl; }
};

int main() {
    VideoPlayer vp;
    vp.play();
    vp.pause();
    vp.stop();
    return 0;
}
