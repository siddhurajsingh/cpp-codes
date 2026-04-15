#include <iostream>
using namespace std;

class Plugin {
public:
    virtual string getName() = 0;
    virtual void execute() = 0;
    virtual ~Plugin() {}
};

class AudioPlugin : public Plugin {
public:
    string getName() override { return "Audio Plugin"; }
    void execute() override { cout << "Executing audio plugin..." << endl; }
};

class VideoPlugin : public Plugin {
public:
    string getName() override { return "Video Plugin"; }
    void execute() override { cout << "Executing video plugin..." << endl; }
};

int main() {
    AudioPlugin ap;
    cout << ap.getName() << endl;
    ap.execute();
    return 0;
}
