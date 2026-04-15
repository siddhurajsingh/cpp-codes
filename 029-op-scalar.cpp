#include <iostream>
using namespace std;

class Logger {
public:
    virtual void writeLog(string message) = 0;
    virtual ~Logger() {}
};

class FileLogger : public Logger {
public:
    void writeLog(string message) override {
        cout << "File: " << message << endl;
    }
};

class ConsoleLogger : public Logger {
public:
    void writeLog(string message) override {
        cout << "Console: " << message << endl;
    }
};

class Application {
private:
    Logger* logger;
public:
    Application(Logger* l) : logger(l) {}
    void run() { logger->writeLog("Application started"); }
};

int main() {
    FileLogger fl;
    Application app(&fl);
    app.run();
    return 0;
}
