#include <iostream>
using namespace std;

class String {
private:
    char str[100];
public:
    String(const char* s = "") { strcpy(str, s); }

    String& operator=(const String& s) {
        strcpy(str, s.str);
        return *this;
    }

    void display() {
        cout << str << endl;
    }
};

int main() {
    String s1("Hello");
    String s2;
    s2 = s1;
    s2.display();
    return 0;
}
