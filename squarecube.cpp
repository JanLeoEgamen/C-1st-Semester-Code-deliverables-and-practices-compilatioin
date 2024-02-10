//Jan Leo Egamen
//create a program compute and display the square and cube of a number entered by user.
#include <iostream>
using namespace std;

int main(){
    int num, square, cube;
    
    cout << "Input a number: ";
    cin >> num;
    
    square = num * num;
    cube = num * num * num;
    
    cout << "square: " << square << endl;
    cout << "cube: " << cube << endl;
    
    return 0;
}