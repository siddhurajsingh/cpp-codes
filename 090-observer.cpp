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
    void log(string message) {
        cout << "[LOG] " << message << endl;
    }
};

Logger* Logger::instance = nullptr;

int main() {
    Logger::getInstance()->log("Application started");
    Logger::getInstance()->log("Processing data");
    return 0;
}
