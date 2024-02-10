#include <iostream>
using namespace std;

int main(){

int rev, r, num;

cout << "Input number: ";
cin >> num;

do {
 r= num%10;
 rev = (rev*10) + r;
 num = num /10;
}while( num != 0);
cout << "Reverse: "<< rev;

return 0;
}
