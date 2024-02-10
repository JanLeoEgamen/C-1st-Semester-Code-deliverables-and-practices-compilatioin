#include <iostream>
using namespace std;
int main()
{
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
    return 0;
}