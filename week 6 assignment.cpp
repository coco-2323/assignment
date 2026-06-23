//Name:Lawrence Njeru
//reg no:BCS-05-0066/2025
//Week 6 assignment
#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    int copiesAvailable;

    void inputDetails()
    {
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Number of Copies Available: ";
        cin >> copiesAvailable;
    }

    void borrowBook()
    {
        if (copiesAvailable > 0)
        {
            copiesAvailable--;
            cout << "Book borrowed successfully.\n";
        }
        else
        {
            cout << "No copies available.\n";
        }
    }

    void displayDetails()
    {
        cout << "\nBook Details\n";
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Copies Available: " << copiesAvailable << endl;
    }
};

int main()
{
    Book b;

    b.inputDetails();
    b.borrowBook();
    b.displayDetails();

    return 0;
}
