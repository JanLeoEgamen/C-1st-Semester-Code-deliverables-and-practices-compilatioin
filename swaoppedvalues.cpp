// Jan Leo Egamen 
//to swap the values of two variables entered by user then display the swapped values.
#include <iostream>
using namespace std;

int main(){
    int a, b, temp;
    
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    
    temp = a;
    a = b;
    b = temp;
    
    cout << "a = " << a << endl;
    cout << "b = " << b;
    
    return 0;
}