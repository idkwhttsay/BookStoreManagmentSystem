#include "Menus.h"
#include <iostream>

using namespace std;

void Menus::bookMenu() {
    int funcChoice;

    cout << "*************************************************\n";
	cout << "                    Books Menu                   \n";
	cout << "*************************************************\n";
	cout << "   1. Add Book\n";
	cout << "   2. Update Book Price\n";
	cout << "   3. Search Book\n";
	cout << "   4. Update Book Status\n";
	cout << "   5. Display All Books\n";
	cout << "   6. Return To Main Menu\n\n\n";
	cout << "Enter Your Choice : \n";

    cin >> funcChoice;
}

void Menus::employeesMenu() {
    int funcChoice;

    cout << "*************************************************\n";
	cout << "                   Employees List                \n";
	cout << "*************************************************\n";
	cout << "   1. New Employee\n";
	cout << "   2. Search Employee\n";
	cout << "   3. Assign Manager\n";
	cout << "   4. View All\n";
	cout << "   5. Update Salary\n";
	cout << "   6. Return To Main Menu\n\n\n";
	cout << "Enter Your Choice : \n";

    cin >> funcChoice;
}

void Menus::membersMenu() {
    int funcChoice;

    cout << "*************************************************\n";
	cout << "                    Members List                 \n";
	cout << "*************************************************\n";
	cout << "   1. New Member\n";
	cout << "   2. Search Member\n";
	cout << "   3. Return To Main Menu\n\n\n";
	cout << "Enter Your Choice : \n";

    cin >> funcChoice;
}

void Menus::purchasesMenu() {
    int funcChoice;

    cout << "*************************************************\n";
	cout << "                   Purchases List                \n";
	cout << "*************************************************\n";
	cout << "   1. New Order\n";
	cout << "   2. View All\n";
	cout << "   3. Cancel Order\n";
	cout << "   4. Received Orders\n";
	cout << "   5. Return To Main Menu\n\n\n";
	cout << "Enter Your Choice : \n";

    cin >> funcChoice;
}

void Menus::salesMenu() {
    int funcChoice;

    cout << "*************************************************\n";
	cout << "                    Sales List                   \n";
	cout << "*************************************************\n";
	cout << "   1. Add New Bill\n";
	cout << "   2. Total Sales\n";
	cout << "   3. Return To Main Menu\n\n\n";
	cout << "Enter Your Choice : \n";

    cin >> funcChoice;
}

void Menus::suppliersMenu() {
    int funcChoice;

    cout << "*************************************************\n";
	cout << "                   Suppliers List                \n";
	cout << "*************************************************\n";
	cout << "   1. Add Supplier\n";
	cout << "   2. Remove Supplier\n";
	cout << "   3. Search Supplier\n";
	cout << "   4. Return To Main Menu\n\n\n";
	cout << "Enter Your Choice : \n";

    cin >> funcChoice;
}