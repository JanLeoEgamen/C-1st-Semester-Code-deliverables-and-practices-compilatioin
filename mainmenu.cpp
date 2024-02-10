#include <iostream>
#include <conio.h>
using namespace std;
int main(){
int choices;
do{
cout << "Main Menu" << endl;
cout << "1 - Problem 1"<< endl;
cout << "2 - Problem 2"<< endl;
cout << "3 - Exit"<< endl;
cout << "Enter your choices:";
cin >> choices;
switch(choices){
    
    case 1:
    int n1, n2, n3, n4;
    float Total, Ave;
    cout << "Compute the total average of four numbers:"<<endl;
    cout << "---------------------------------"<<endl;
    cout << "Input the first two numbers (separated by space):";
    cin >> n1 >> n2;
    cout << "Input the last two numbers (separated by space):";
    cin >> n3 >> n4;
    
    Total = n1+n2+n3+n4;
    Ave = Total/4;

    cout << "The total of four numbers is:"<<Total<<endl;
    cout << "The average of four numbers is:"<< Ave;
    break;
    case 2:
    int dividend, divisor, quo, rem;

    cout << "Compute the quotient and remainder."<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input dividend:";
    cin >> dividend;
    cout << "Input divisor:";
    cin >> divisor;

    quo = dividend/divisor;
    rem = dividend%divisor;

    cout << "The quotient of the division is:"<<quo<<endl;
    cout << "The remainder of the division is:"<<rem<<endl;
    break;
    case 3:
    exit(0);
}
}while(choices<3);
    return 0;
}