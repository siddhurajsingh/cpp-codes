#include <iostream>
using namespace std;

class Lock {
private:
    string resource;
public:
    Lock(string r) : resource(r) {
        cout << "Lock acquired for " << resource << endl;
    }
    ~Lock() {
        cout << "Lock released for " << resource << endl;
    }
};

int main() {
    {
        Lock l("database");
        cout << "Using resource" << endl;
    }
    cout << "Resource released" << endl;
    return 0;
}
