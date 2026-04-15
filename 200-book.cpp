#include <iostream>
using namespace std;

class String {
private:
    char* str;
public:
    String(const char* s = "") {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    
    String(const String& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    
    String& operator=(const String& other) {
        if (this != &other) {
            delete[] str;
            str = new char[strlen(other.str) + 1];
            strcpy(str, other.str);
        }
        return *this;
    }
    
    ~String() { delete[] str; }
    
    void display() { cout << str << endl; }
};

int main() {
    String s1("Hello");
    String s2 = s1;
    String s3;
    s3 = s1;
    s1.display();
    return 0;
}
