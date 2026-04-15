#include <iostream>
using namespace std;

class String {
private:
    char* str;
    int len;
public:
    String(const char* s) { len = strlen(s); str = new char[len+1]; strcpy(str, s); }
    String(const String& other) { len = other.len; str = new char[len+1]; strcpy(str, other.str); }
    ~String() { delete[] str; }
    void display() { cout << str << endl; }
};

int main() {
    String s1("Hello");
    String s2 = s1;
    s2.display();
    return 0;
}
