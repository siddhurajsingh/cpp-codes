#include <iostream>
using namespace std;

class Date {
private:
    int day, month, year;
public:
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    void display() const {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    const Date d(15, 4, 2026);
    d.display();
    return 0;
}
