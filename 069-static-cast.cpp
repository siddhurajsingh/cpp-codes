#include <iostream>
using namespace std;

class Controller {
public:
    virtual void handleRequest(string request) = 0;
    virtual void processInput(string input) = 0;
    virtual ~Controller() {}
};

class UserController : public Controller {
public:
    void handleRequest(string request) override { cout << "UserController handling: " << request << endl; }
    void processInput(string input) override { cout << "Processing user input: " << input << endl; }
};

int main() {
    UserController uc;
    uc.handleRequest("GET /users");
    uc.processInput("create");
    return 0;
}
