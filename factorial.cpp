#include <iostream> 
using namespace std;

int main()
{
    int num, factor = 1;
cout << "Enter a number: ";
cin >> num;
for(num; num >0; num--){
    factor = factor * num;
}
cout << "Factorial: " << factor;

    return 0;
}