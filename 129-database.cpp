#include <iostream>
using namespace std;

class Converter {
public:
    operator int() {
        return 42;
    }
};

int main() {
    Converter c;
    int value = (int)c;
    cout << "Converted value: " << value << endl;
    return 0;
}
