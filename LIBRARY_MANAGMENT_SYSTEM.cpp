#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// Structure to represent a book
struct Book {
    std::string title;
    std::string author;
    std::string isbn;
    bool isAvailable;
    std::string borrower;
    std::string checkoutDate;
    std::string returnDate;
};

// Structure to represent a borrower
struct Borrower {
    std::string name;
    std::string email;
    std::string phone;
};

// Library class to manage books and borrowers
class Library {
private:
    std::vector<Book> books;
    std::vector<Borrower> borrowers;

public:
    // Add a book to the library
    void addBook(const Book& book) {
        books.push_back(book);
    }

    // Search for a book by title, author, or ISBN
    void searchBook(const std::string& query) {
        for (const auto& book : books) {
            if (book.title.find(query) != std::string::npos ||
                book.author.find(query) != std::string::npos ||
                book.isbn.find(query) != std::string::npos) {
                std::cout << "Title: " << book.title << std::endl;
                std::cout << "Author: " << book.author << std::endl;
                std::cout << "ISBN: " << book.isbn << std::endl;
                std::cout << "Availability: " << (book.isAvailable ? "Yes" : "No") << std::endl;
                std::cout << std::endl;
            }
        }
    }

    // Check out a book to a borrower
    void checkoutBook(const std::string& isbn, const std::string& borrowerName) {
        for (auto& book : books) {
            if (book.isbn == isbn && book.isAvailable) {
                book.isAvailable = false;
                book.borrower = borrowerName;
                // Set checkout date and return date (for simplicity, assume 14-day checkout period)
                book.checkoutDate = "Today";
                book.returnDate = "14 days from today";
                std::cout << "Book checked out successfully!" << std::endl;
                return;
            }
        }
        std::cout << "Book not found or not available!" << std::endl;
    }

    // Return a book
    void returnBook(const std::string& isbn) {
        for (auto& book : books) {
            if (book.isbn == isbn && !book.isAvailable) {
                book.isAvailable = true;
                book.borrower = "";
                book.checkoutDate = "";
                book.returnDate = "";
                std::cout << "Book returned successfully!" << std::endl;
                return;
            }
        }
        std::cout << "Book not found or already available!" << std::endl;
    }

    // Calculate fine for overdue books
    void calculateFine(const std::string& isbn) {
        for (const auto& book : books) {
            if (book.isbn == isbn && !book.isAvailable) {
                // For simplicity, assume a fine of $0.50 per day
                int daysOverdue = 14; // Replace with actual days overdue
                double fine = daysOverdue * 0.50;
                std::cout << "Fine: $" << fine << std::endl;
                return;
            }
        }
        std::cout << "Book not found or not overdue!" << std::endl;
    }
};

int main() {
    Library library;

    // User interface
    int choice;
    while (true) {
        std::cout << "Library Management System" << std::endl;
        std::cout << "1. Add a book" << std::endl;
        std::cout << "2. Search for a book" << std::endl;
        std::cout << "3. Check out a book" << std::endl;
        std::cout << "4. Return a book" << std::endl;
        std::cout << "5. Calculate fine" << std::endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                Book book;
                std::cout << "Enter book title: ";
                std::cin >> book.title;
                std::cout << "Enter book author: ";
                std::cin >> book.author;
                std::cout << "Enter book ISBN: ";
                std::cin >> book.isbn;
                book.isAvailable = true;
                library.addBook(book);
                break;
            }
            case 2: {
                std::string query;
                std::cout << "Enter search query: ";
                std::cin >> query;
                library.searchBook(query);
                break;
            }
            case 3: {
                std::string isbn, borrowerName;
                std::cout << "Enter book ISBN: ";
                std::cin >> isbn;
                std::cout << "Enter borrower name: ";
                std::cin >> borrowerName;
                library.checkoutBook(isbn, borrowerName);
                break;
            }
            case 4: {
                std::string isbn;
                std::cout << "Enter book ISBN: ";
                std::cin >> isbn;
                library.returnBook(isbn);
                break;
            }
            case 5: {
                std::string isbn;
                std::cout << "Enter book ISBN: ";
                std::cin >> isbn;
                library.calculateFine(isbn);
                break;
            }
            case 6:
                return 0;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;

/*Library Management System
1. Add a book
2. Search for a book
3. Check out a book
4. Return a book
5. Calculate fine
6. Exit
Enter your choice: 1
Enter book title: ramayana
Enter book author: valmiki
Enter book ISBN: 1
Library Management System
1. Add a book
2. Search for a book
3. Check out a book
4. Return a book
5. Calculate fine
6. Exit
Enter your choice: 1
Enter book title: mahabharat
Enter book author: vedavyasa
Enter book ISBN: 2
Library Management System
1. Add a book
2. Search for a book
3. Check out a book
4. Return a book
5. Calculate fine
6. Exit
Enter your choice: 2
Enter search query: 1
Title: ramayana
Author: valmiki
ISBN: 1
Availability: Yes

Library Management System
1. Add a book
2. Search for a book
3. Check out a book
4. Return a book
5. Calculate fine
6. Exit
Enter your choice: 3
Enter book ISBN: 2
Enter borrower name: chaitra
Book checked out successfully!
Library Management System
1. Add a book
2. Search for a book
3. Check out a book
4. Return a book
5. Calculate fine
6. Exit
Enter your choice: 4
Enter book ISBN: 2
Book returned successfully!
Library Management System
1. Add a book
2. Search for a book
3. Check out a book
4. Return a book
5. Calculate fine
6. Exit
Enter your choice: 5
Enter book ISBN: 2
Book not found or not overdue!
Library Management System
1. Add a book
2. Search for a book
3. Check out a book
4. Return a book
5. Calculate fine
6. Exit
Enter your choice: 6
  */
