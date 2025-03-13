#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
public:
    // Parameterized constructor
    Book(string t) : title(t) {}

    // Copy constructor
    Book(const Book &other) {
        title = other.title;
        cout << "Copy constructor called!\n";
    }

    void display() const {
        cout << "Title: " << title << endl;
    }
};

int main() {
    Book book1("C++ Basics");    // Calls parameterized constructor
    Book book2 = book1;         // Calls copy constructor

    book1.display();
    book2.display();

    cout << "Hello world, this program is working perfectly fine. "<< endl;
    return 0;
}
