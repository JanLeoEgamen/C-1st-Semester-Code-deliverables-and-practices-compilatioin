#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;


void Oders(){
    cout << "Available food and beverages"<< endl;
    cout << "D - Drinks"<< endl;
    cout << "P - Pizza"<< endl;
    cout << "F - fries"<< endl;
    cout << "B - Burgers"<< endl;
    cout << "F - fries"<< endl;

}


void MainMenu(){
    cout << "Main Menu"<< endl;
    cout << "1. Pick orders "<< endl;
    cout << "2. Payment"<< endl;
    cout << "3. Order Details"<< endl;
    cout << "4. Exit"<< endl;
}



int main(){
    int choice;
    main:
    system("cls");
    MainMenu();
    cout << "Enter Choice:";
    cin >>choice;

        switch (choice)
        {
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        
        default:
            cout << "Invalid Entry, Please Retry";
            getch();
            goto main;
            break;
        }
    

    return 0;
}