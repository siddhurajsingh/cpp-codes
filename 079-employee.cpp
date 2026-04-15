#include <iostream>
using namespace std;

class Task {
public:
    virtual void execute() = 0;
    virtual string getStatus() = 0;
    virtual ~Task() {}
};

class DownloadTask : public Task {
public:
    void execute() override { cout << "Downloading..." << endl; }
    string getStatus() override { return "Downloading 50%"; }
};

class InstallTask : public Task {
public:
    void execute() override { cout << "Installing..." << endl; }
    string getStatus() override { return "Installing complete"; }
};

int main() {
    DownloadTask dt;
    dt.execute();
    cout << "Status: " << dt.getStatus() << endl;
    return 0;
}
