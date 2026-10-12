
#include <iostream>
using namespace std;

int main()
{
    int choice;

    do
    {
        cout << "\n===== LIBRARY MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Book\n";
        cout << "2. View All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Issue Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Add Book feature will be added next.\n";
                break;

            case 2:
                cout << "View Books feature will be added next.\n";
                break;

            case 3:
                cout << "Search feature will be added next.\n";
                break;

            case 4:
                cout << "Issue Book feature will be added next.\n";
                break;

            case 5:
                cout << "Return Book feature will be added next.\n";
                break;

            case 6:
                cout << "Exiting Library Management System.\n";
                break;

            default:
                cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
