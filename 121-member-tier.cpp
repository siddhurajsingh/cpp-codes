#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    string isbn;
public:
    Book(string t, string a, string i) : title(t), author(a), isbn(i) {}
    
    bool operator==(const Book& other) const {
        return isbn == other.isbn;
    }
    
    void display() {
        cout << "Title: " << title << ", Author: " << author << ", ISBN: " << isbn << endl;
    }
};

int main() {
    Book b1("C++ Primer", "Lippman", "978-0321714688");
    Book b2("C++ Primer", "Lippman", "978-0321714688");
    
    if (b1 == b2) {
        cout << "Same book" << endl;
    }
    b1.display();
    return 0;
}
