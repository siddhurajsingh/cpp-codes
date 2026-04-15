#include <iostream>
using namespace std;

class Theme {
public:
    virtual string getBackgroundColor() = 0;
    virtual string getFontColor() = 0;
    virtual ~Theme() {}
};

class DarkTheme : public Theme {
public:
    string getBackgroundColor() override { return "#000000"; }
    string getFontColor() override { return "#FFFFFF"; }
};

class LightTheme : public Theme {
public:
    string getBackgroundColor() override { return "#FFFFFF"; }
    string getFontColor() override { return "#000000"; }
};

int main() {
    DarkTheme dt;
    cout << "BG: " << dt.getBackgroundColor() << ", Font: " << dt.getFontColor() << endl;
    return 0;
}
