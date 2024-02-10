//Jan Leo Egamen
// Program that  will input for a number and then Identify whether  Odd or Even.
#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num%2==0){
        cout << num << " is Even";
    }
    else{
        cout << num << " is Odd";
    }

    return 0;
}
