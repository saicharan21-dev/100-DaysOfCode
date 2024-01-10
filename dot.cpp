#include <iostream>
#include <vector>
using namespace std;

class Author {
private:
    string name;
    string email;
    string bio;

public:
    Author(string name, string email, string bio)
        : name(name), email(email), bio(bio) {}

    string getName() {
        return name;
    }

    string getEmail() {
        return email;
    }

    string getBio() {
        return bio;
    }
};

class Book {
private:
    string title;
    int year;
    Author author;

public:
    Book(string title, int year, Author author)
        : title(title), year(year), author(author) {}

    string getTitle() {
        return title;
    }

    int getYear() {
        return year;
    }

    Author getAuthor() {
        return author;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(Book book) {
        books.push_back(book);
    }

    void displayBooks() {
        for (auto& book : books) {
            cout << "Title: " << book.getTitle() << endl;
            cout << "Year: " << book.getYear() << endl;
            cout << "Author: " << book.getAuthor().getName() << endl;
            cout << "Email: " << book.getAuthor().getEmail() << endl;
            cout << "Bio: " << book.getAuthor().getBio() << endl << endl;
        }
    }
};

int main() {
    Library library;

    string author1Name, author1Email, author1Bio;
    cout << "Enter author's name: ";
    getline(cin, author1Name);
    cout << "Enter author's email: ";
    getline(cin, author1Email);
    cout << "Enter author's bio: ";
    getline(cin, author1Bio);
    Author author1(author1Name, author1Email, author1Bio);

    string book1Title;
    int book1Year;
    cout << "Enter book title: ";
    getline(cin, book1Title);
    cout << "Enter publication year: ";
    cin >> book1Year;
    cin.ignore();
    Book book1(book1Title, book1Year, author1);

    library.addBook(book1);

    cout << "\nBooks in the library:" << endl;
    library.displayBooks();

    return 0;
}
