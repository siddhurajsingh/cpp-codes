#include <iostream>
using namespace std;

try {
    throw runtime_error("An error occurred");
} catch (runtime_error& e) {
    cout << "Caught exception: " << e.what() << endl;
}

class CustomException : public exception {
public:
    const char* what() const noexcept override {
        return "Custom exception occurred";
    }
};

int main() {
    try {
        throw CustomException();
    } catch (CustomException& e) {
        cout << e.what() << endl;
    }
    return 0;
}
