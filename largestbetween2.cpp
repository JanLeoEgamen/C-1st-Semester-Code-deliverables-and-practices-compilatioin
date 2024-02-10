// Jan Leo Egamen 
// Program that will input for 2 numbers and then Identify the  Largest between the 2 Numbers
#include <iostream>
using namespace std;

int main(){
    int numOne, numTwo;

    cout << "Enter first number: ";
    cin >> numOne;
    cout << "Enter second number: ";
    cin >> numTwo;

    if (numOne>numTwo){
        cout << numOne << " is the largest";
    }
    else {
        cout << numTwo << " is the largest";
    }

    return 0;
}