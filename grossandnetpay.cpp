//Jan Leo Egamen
/*Program to compute and display the gross pay and net pay by taking employee number, employee name, number of hours worked, and rate per hour as an input from user.
Formula:
grossPay = noOfhours * ratePerhour
netPay = grossPay - (grossPay * 0.1)*/
#include <iostream>
using namespace std;

int main(){
    char Ename[100];
    float Enum, numOfhoursWorked, ratePerhour, grossPay, netPay;
    
    cout << "Input Employee name: ";
    cin.getline(Ename, 100);
    cout << "Input Employee number: ";
    cin >> Enum;
    cout << "Input number of hours worked: ";
    cin >> numOfhoursWorked;
    cout << "Input rate per hour: ";
    cin >> ratePerhour;
    
    grossPay = numOfhoursWorked * ratePerhour;
    netPay = grossPay - (grossPay * 0.1);
    
    cout << "Gross Pay: " << grossPay << endl;
    cout << "Net Pay: " << netPay;
    
    return 0;
}