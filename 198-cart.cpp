#include <iostream>
using namespace std;

class File {
private:
    string filename;
public:
    File(string name) : filename(name) {
        cout << "File opened: " << filename << endl;
    }
    ~File() {
        cout << "File closed: " << filename << endl;
    }
};

int main() {
    {
        File f("test.txt");
    }
    cout << "File object goes out of scope" << endl;
    return 0;
}
