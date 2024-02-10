//Jan Leo Egamen
//Progam that will input for 3 numbers and then Identify the    Largest among 3 Numbers;
#include <iostream>
using namespace std;

int main(){
    int numOne, numTwo, numThree;

    cout << "Enter first number: ";
    cin >> numOne;
    cout << "Enter second number: ";
    cin >> numTwo;
    cout << "Enter third number: ";
    cin >> numThree;
    if (numOne>numTwo){
        if (numOne>numThree){
            cout << numOne << " is the largest";
        }
        else {
            cout << numThree << " is the largest";
        }
    }
    else{
        if(numTwo>numThree){
            cout << numTwo << " is the largest";
        }
        else {
            cout << numThree << " is the largest";
        }
    }
    return 0;
}