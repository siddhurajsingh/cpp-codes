#include <iostream>
using namespace std;

class Logger {
private:
    static Logger* instance;
    Logger() {}
public:
    static Logger* getInstance() {
        if (!instance) instance = new Logger();
        return instance;
    }
    void log(string msg) { cout << "Log: " << msg << endl; }
};

Logger* Logger::instance = nullptr;

int main() {
    Logger* log1 = Logger::getInstance();
    Logger* log2 = Logger::getInstance();
    log1->log("Message 1");
    cout << "Same instance: " << (log1 == log2) << endl;
    return 0;
}
