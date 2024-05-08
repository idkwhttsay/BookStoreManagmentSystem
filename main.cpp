#include <iostream>
#include "Menus.h"
#include <sstream>

using namespace std;

void mainMenu(){

    int funcChoice;
    Menus menu;

    cout << "*************************************************\n";
	cout << "           BOOKSHOP MANAGEMENT SYSTEM            \n";
	cout << "*************************************************\n";
	cout << "   1. BOOKS\n";
	cout << "   2. SUPPLIERS\n";
	cout << "   3. PURCHASES\n";
	cout << "   4. EMPLOYEES\n";
	cout << "   5. MEMBERS\n";
	cout << "   6. SALES\n";
	cout << "   7. EXIT\n\n\n";
	cout << "Enter Your Choice : \n";

    cin >> funcChoice;
    switch (funcChoice) {
        case 1:
            system("clear");
            menu.bookMenu();
        case 2:
            system("clear");
            menu.suppliersMenu();
        case 3:
            system("clear");
            menu.purchasesMenu();
        case 4:
            system("clear");
            menu.employeesMenu();
        case 5:
            system("clear");
            menu.membersMenu();
        case 6:
            system("clear");
            menu.salesMenu();
        case 7:
            exit(0);
        default:
            system("clear");
            cout << "Invalid input.\n\n";
            break;
    }

    return;
}

int main() {
    // TO DO: Auth

    // TO DO: SQL data based connect

    while(true){
        system("clear");
        mainMenu();
    }

    return 0;
}