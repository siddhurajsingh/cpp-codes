#include <iostream>
using namespace std;

class Library {
private:
    struct Book {
        string title;
        string author;
        bool available;
    };
    Book books[10];
    int count;
public:
    Library() : count(0) {}
    
    void addBook(string title, string author) {
        books[count] = {title, author, true};
        count++;
    }
    
    void displayBooks() const {
        for (int i = 0; i < count; i++) {
            cout << "Book " << (i+1) << ": " << books[i].title << " by " << books[i].author << endl;
        }
    }
};

int main() {
    Library lib;
    lib.addBook("The Hobbit", "Tolkien");
    lib.addBook("Harry Potter", "Rowling");
    lib.displayBooks();
    return 0;
}
