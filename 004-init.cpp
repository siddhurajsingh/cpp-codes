#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    float price;

    void show() {
        cout << title << " by " << author << " costs $" << price << endl;
    }
};

int main() {
    Book b1 = {"The Great Gatsby", "F. Scott Fitzgerald", 10.99};
    b1.show();
    return 0;
}
