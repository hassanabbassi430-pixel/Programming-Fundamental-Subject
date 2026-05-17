#include <iostream>
#include<conio.h>
using namespace std;

int main() {

    // ===== BOOK DATA (Parallel Arrays) =====
    string bookName[20];
    string author[20];
    int copies[20];
    int bookCount = 0;

    // ===== BORROW HISTORY =====
    string issuedBooks[20];
    int issueCount = 0;

    int mainChoice;

    while (true) {
           //main header lms
           system("cls");
        cout<<"-----------------------------------------"<<endl;
        cout<<"---------LIBRARY MANAGMENT SYSTEM--------"<<endl;
        cout<<"-----------------------------------------"<<endl;
        cout << "1. Admin\n";
        cout << "2. User\n";
        cout << "0. Exit\n";
        cout << "Enter main choice: ";
        cin >> mainChoice;

        if (mainChoice == 0) break;

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
                cout << "5. Sort Books (by name)\n";
                cout << "6. View Issue History\n";
                cout << "0. Back\n";
                cout << "Enter choice: ";
                cin >> adminChoice;

                if (adminChoice == 0) break;

                // 1. Add Book
                if (adminChoice == 1) {
                    cout << "Enter book name: ";
                    cin >> bookName[bookCount];
                    cout << "Enter author name: ";
                    cin >> author[bookCount];
                    cout << "Enter number of copies: ";
                    cin >> copies[bookCount];

                    bookCount++;
                    cout << "Book added successfully!\n"<<endl;
                    cout<<"Press Enter to continue";
                     getch();
                } 
                // 2. Show Books
                else if (adminChoice == 2) {
                    if (bookCount == 0) {
                        cout << "No books available!\n";
                    } else {
                        cout << "\n--- Book List ---\n";
                        for (int i = 0; i < bookCount; i++) {
                            cout << i << ". " << bookName[i]
                                 << " | Author: " << author[i]
                                 << " | Copies: " << copies[i] << endl;
                        }
                    }   
                        cout<<"Press Enter to continue";
                        getch();

                }
                // 3. Update Copies
                else if (adminChoice == 3) {
                    int i, add;
                    cout << "Enter book index: ";
                    cin >> i;

                    if (i >= 0 && i < bookCount) {
                        cout << "Enter copies to add: ";
                        cin >> add;
                        copies[i] += add;
                        cout << "Copies updated!\n";
                    } else {
                        cout << "Invalid index!\n";
                    }   
                        cout<<"Press Enter to continue";
                        getch();
                }

                // 4. Search Book
                else if (adminChoice == 4) {
                    string search;
                    cout << "Enter book name: ";
                    cin >> search;

                    bool found = false;
                    for (int i = 0; i < bookCount; i++) {
                        if (bookName[i] == search) {
                            cout << "Found: " << bookName[i]
                                 << " | Author: " << author[i]
                                 << " | Copies: " << copies[i] << endl;
                            found = true;
                        }
                    }     
                    if (!found) cout << "Book not found!\n"<<endl;
                        cout<<"Press Enter to continue";
                        getch();

                }
                // 5. Sort Books
                else if (adminChoice == 5) {
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

                                for (int i = 0; i < bookCount; i++) {
                                  cout << "Book " << i + 1 << ":\n";
                                  cout << "Name: " << bookName[i] << endl;
                                  cout << "Author: " << author[i] << endl;
                                   cout << "Copies: " << copies[i] << endl;
                                 
                                   cout << "----------------------\n";
                                }
                            }
                        } 
                    } 
                    cout << "Books sorted!\n"<<endl;
                    cout<<"Press Enter to continue";
                    getch();

                } 

                // 6. Issue History
                else if (adminChoice == 6) {
                    if (issueCount == 0) {
                        cout << "No books issued yet!\n";
                    } else {
                        cout << "\n--- Issue History ---\n";
                        for (int i = 0; i < issueCount; i++) {
                            cout << i+1 << ". " << issuedBooks[i] << endl;
                        }
                    }
                }          
                            cout<<"Press Enter to continue";
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

                if (userChoice == 0) break;

                // 1. View Books
                if (userChoice == 1) {
                    if (bookCount == 0) {
                        cout << "No books available!\n";
                    } else {
                        for (int i = 0; i < bookCount; i++) {
                            cout << i << ". " << bookName[i]
                                 << " | Author: " << author[i]
                                 << " | Copies: " << copies[i] << endl;
                        }
                    }    
                           cout<<"Press Enter to continue";
                           getch();

                } 
                // 2. Borrow Book
                else if (userChoice == 2) {
                    int i;

                    if (bookCount == 0) {
                        cout << "No books available!\n";
                        continue;
                    }

                    cout << "Enter book index: ";
                    cin >> i;

                    if (i < 0 || i >= bookCount) {
                        cout << "Invalid index!\n";
                    } else if (copies[i] == 0) {
                        cout << "Book not available!\n";
                    } else {
                        copies[i]--;
                        issuedBooks[issueCount++] = bookName[i];
                        cout << "Book issued successfully!\n";
                    }     
                        cout<<"Press Enter to continue";
                        getch();
                            
                } 

                // 3. Return Book
                else if (userChoice == 3) {
                    int i;
                    cout << "Enter book index: ";
                    cin >> i;

                    if (i >= 0 && i < bookCount) {
                        copies[i]++;
                        cout << "Book returned successfully!\n";
                    } else {
                        cout << "Invalid index!\n";
                    }      
                            cout<<"Press Enter to continue";
                            getch();
                            
                } 
                // 4. Search
                else if (userChoice == 4) {
                    string search;
                    cout << "Enter book name: ";
                    cin >> search;

                    bool found = false;
                    for (int i = 0; i < bookCount; i++) {
                        if (bookName[i] == search) {
                            cout << "Found: " << bookName[i]
                                 << " | Author: " << author[i]
                                 << " | Copies: " << copies[i] << endl;
                            found = true;
                        }
                    }      
                            cout<<"Press Enter to continue";
                            getch();

                    if (!found) cout << "Book not found!\n";
                }          
                            

                // 5. View Issue History
                else if (userChoice == 5) {
                    if (issueCount == 0) {
                        cout << "No issued books!\n";
                    } else {
                        for (int i = 0; i < issueCount; i++) {
                            cout << i+1 << ". " << issuedBooks[i] << endl;
                           
                        }
                    }      
                            cout<<"Press Enter to continue";
                            getch();
                            

                }
            }
        }
    }

    return 0;
}
    

         

    
