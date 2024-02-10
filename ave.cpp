#include <iostream>
using namespace std;
int main()
{
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

    return 0;
}