#include <iostream>
using namespace std;

class Bridge {
public:
    virtual void operation() = 0;
    virtual ~Bridge() {}
};

class LinuxBridge : public Bridge {
public:
    void operation() override { cout << "Linux operation" << endl; }
};

class WindowsBridge : public Bridge {
public:
    void operation() override { cout << "Windows operation" << endl; }
};

class Application {
private:
    Bridge* bridge;
public:
    Application(Bridge* b) : bridge(b) {}
    void run() { bridge->operation(); }
};

int main() {
    LinuxBridge lb;
    Application app(&lb);
    app.run();
    return 0;
}
