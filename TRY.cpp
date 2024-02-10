#include <iostream> 
using namespace std;

int main(){
  double q, r;
  int n1, n2;

    cout << "Enter first number:";
    cin >> n1;
    cout << "Enter second number:";
    cin >> n2;
  q=n1/n2;
  r=n1%n2;
cout <<"Qoutient is " << q << endl;
cout << "Remainder is "<< r;

}