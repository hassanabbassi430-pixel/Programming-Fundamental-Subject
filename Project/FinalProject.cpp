
#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

// ===== FUNCTION DECLARATIONS =====
void addBook(string bookName[], string author[], int copies[], int &bookCount);
void showBooks(string bookName[], string author[], int copies[], int bookCount);
void updateCopies(string bookName[], string author[],
                  int copies[], int bookCount);
void searchBook(string bookName[], string author[],
                int copies[], int bookCount);
void sortBooks(string bookName[], string author[],
               int copies[], int bookCount);
void viewIssueHistory(string issuedBooks[], int issueCount);
void borrowBook(string bookName[], string author[],
                string issuedBooks[],
                int copies[], int bookCount, int &issueCount);
void returnBook(string bookName[], string author[],
                int copies[], int bookCount);

void saveData(string bookName[], string author[],
              int copies[], int bookCount);

void loadData(string bookName[], string author[],
              int copies[], int &bookCount);

// ===== MAIN FUNCTION =====
int main() {

    // ===== BOOK DATA =====
    string bookName[20];
    string author[20];
    int copies[20];
    int bookCount = 0;

    // ===== LOAD FILE DATA =====
    loadData(bookName, author, copies, bookCount);

    // ===== ISSUE HISTORY =====
    string issuedBooks[20];
    int issueCount = 0;

    int mainChoice;

    while (true) {

        system("cls");

        cout << "-----------------------------------------\n";
        cout << "---------LIBRARY MANAGEMENT SYSTEM-------\n";
        cout << "-----------------------------------------\n";

        cout << "1. Admin\n";
        cout << "2. User\n";
        cout << "0. Exit\n";
        cout << "Enter main choice: ";
        cin >> mainChoice;

        if (mainChoice == 0)
            break;

        // ================= ADMIN =================
        if (mainChoice == 1) {

            int adminChoice;

            while (true) {

                system("cls");

                cout << "\n--- ADMIN MENU ---\n";
                cout << "1. Add Book\n";
                cout << "2. Show Books\n";
                cout << "3. Update Copies\n";
                cout << "4. Search Book\n";
                cout << "5. Sort Books\n";
                cout << "6. View Issue History\n";
                cout << "0. Back\n";

                cout << "Enter choice: ";
                cin >> adminChoice;

                if (adminChoice == 0)
                    break;

                if (adminChoice == 1) {
                    addBook(bookName, author, copies, bookCount);
                }

                else if (adminChoice == 2) {
                    showBooks(bookName, author, copies, bookCount);
                }

                else if (adminChoice == 3) {
                    updateCopies(bookName, author,
                                 copies, bookCount);
                }

                else if (adminChoice == 4) {
                    searchBook(bookName, author,
                               copies, bookCount);
                }

                else if (adminChoice == 5) {
                    sortBooks(bookName, author,
                              copies, bookCount);
                }

                else if (adminChoice == 6) {
                    viewIssueHistory(issuedBooks, issueCount);
                }

                cout << "\nPress Enter to continue";
                getch();
            }
        }

        // ================= USER =================
        else if (mainChoice == 2) {

            int userChoice;

            while (true) {

                system("cls");

                cout << "\n--- USER MENU ---\n";
                cout << "1. View Books\n";
                cout << "2. Borrow Book\n";
                cout << "3. Return Book\n";
                cout << "4. Search Book\n";
                cout << "5. View Issue History\n";
                cout << "0. Back\n";

                cout << "Enter user choice: ";
                cin >> userChoice;

                if (userChoice == 0)
                    break;

                if (userChoice == 1) {
                    showBooks(bookName, author,
                              copies, bookCount);
                }

                else if (userChoice == 2) {
                    borrowBook(bookName, author,
                               issuedBooks,
                               copies, bookCount,
                               issueCount);
                }

                else if (userChoice == 3) {
                    returnBook(bookName, author,
                               copies, bookCount);
                }

                else if (userChoice == 4) {
                    searchBook(bookName, author,
                               copies, bookCount);
                }

                else if (userChoice == 5) {
                    viewIssueHistory(issuedBooks, issueCount);
                }

                cout << "\nPress Enter to continue";
                getch();
            }
        }
    }

    return 0;
}

// ===== ADD BOOK FUNCTION =====
void addBook(string bookName[], string author[],
             int copies[], int &bookCount) {

    cout << "Enter book name: ";
    cin >> bookName[bookCount];

    cout << "Enter author name: ";
    cin >> author[bookCount];

    cout << "Enter number of copies: ";
    cin >> copies[bookCount];

    bookCount++;

    saveData(bookName, author, copies, bookCount);

    cout << "Book added successfully!\n";
}

// ===== SHOW BOOKS FUNCTION =====
void showBooks(string bookName[], string author[],
               int copies[], int bookCount) {

    if (bookCount == 0) {

        cout << "No books available!\n";
    }

    else {

        cout << "\n--- BOOK LIST ---\n";

        for (int i = 0; i < bookCount; i++) {

            cout << i << ". " << bookName[i]
                 << " | Author: " << author[i]
                 << " | Copies: " << copies[i]
                 << endl;
        }
    }
}

// ===== UPDATE COPIES FUNCTION =====
void updateCopies(string bookName[], string author[],
                  int copies[], int bookCount) {

    int index, add;

    cout << "Enter book index: ";
    cin >> index;

    if (index >= 0 && index < bookCount) {

        cout << "Enter copies to add: ";
        cin >> add;

        copies[index] += add;

        saveData(bookName, author, copies, bookCount);

        cout << "Copies updated!\n";
    }

    else {
        cout << "Invalid index!\n";
    }
}

// ===== SEARCH BOOK FUNCTION =====
void searchBook(string bookName[], string author[],
                int copies[], int bookCount) {

    string search;
    bool found = false;

    cout << "Enter book name: ";
    cin >> search;

    for (int i = 0; i < bookCount; i++) {

        if (bookName[i] == search) {

            cout << "Found: " << bookName[i]
                 << " | Author: " << author[i]
                 << " | Copies: " << copies[i]
                 << endl;

            found = true;
        }
    }

    if (!found) {
        cout << "Book not found!\n";
    }
}

// ===== SORT BOOKS FUNCTION =====
void sortBooks(string bookName[], string author[],
               int copies[], int bookCount) {

    for (int i = 0; i < bookCount - 1; i++) {

        for (int j = i + 1; j < bookCount; j++) {

            if (bookName[i] > bookName[j]) {

                string tempName = bookName[i];
                bookName[i] = bookName[j];
                bookName[j] = tempName;

                string tempAuthor = author[i];
                author[i] = author[j];
                author[j] = tempAuthor;

                int tempCopies = copies[i];
                copies[i] = copies[j];
                copies[j] = tempCopies;
            }
        }
    }

    saveData(bookName, author, copies, bookCount);

    cout << "Books sorted successfully!\n";

    showBooks(bookName, author, copies, bookCount);
}

// ===== VIEW ISSUE HISTORY FUNCTION =====
void viewIssueHistory(string issuedBooks[],
                      int issueCount) {

    if (issueCount == 0) {

        cout << "No books issued yet!\n";
    }

    else {

        cout << "\n--- ISSUE HISTORY ---\n";

        for (int i = 0; i < issueCount; i++) {

            cout << i + 1 << ". "
                 << issuedBooks[i] << endl;
        }
    }
}

// ===== BORROW BOOK FUNCTION =====
void borrowBook(string bookName[], string author[],
                string issuedBooks[],
                int copies[], int bookCount,
                int &issueCount) {

    int index;

    if (bookCount == 0) {

        cout << "No books available!\n";
        return;
    }

    cout << "Enter book index: ";
    cin >> index;

    if (index < 0 || index >= bookCount) {

        cout << "Invalid index!\n";
    }

    else if (copies[index] == 0) {

        cout << "Book not available!\n";
    }

    else {

        copies[index]--;

        issuedBooks[issueCount] =
            bookName[index];

        issueCount++;

        saveData(bookName, author,
                 copies, bookCount);

        cout << "Book issued successfully!\n";
    }
}

// ===== RETURN BOOK FUNCTION =====
void returnBook(string bookName[], string author[],
                int copies[], int bookCount) {

    int index;

    cout << "Enter book index: ";
    cin >> index;

    if (index >= 0 && index < bookCount) {

        copies[index]++;

        saveData(bookName, author,
                 copies, bookCount);

        cout << "Book returned successfully!\n";
    }

    else {

        cout << "Invalid index!\n";
    }
}

// ===== SAVE DATA FUNCTION =====
void saveData(string bookName[], string author[],
              int copies[], int bookCount) {

    ofstream file("books.txt");

    for (int i = 0; i < bookCount; i++) {

        file << bookName[i] << " "
             << author[i] << " "
             << copies[i] << endl;
    }

    file.close();
}

// ===== LOAD DATA FUNCTION =====
void loadData(string bookName[], string author[],
              int copies[], int &bookCount) {

    ifstream file("books.txt");

    while (file >> bookName[bookCount]
                >> author[bookCount]
                >> copies[bookCount]) {

        bookCount++;
    }

    file.close();
}