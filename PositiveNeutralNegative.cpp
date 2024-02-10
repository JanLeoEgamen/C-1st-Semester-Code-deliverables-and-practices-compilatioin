// Jan Leo Egamen
// Program that will input for a number and then Identify whether Positive, Negative or Neutral
#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (num==0){
        cout << num << " is Neutral";
    }
    else {
        if(num>0){
            cout << num << " is Positive";
        }
        else{
            cout << num << " is Negative";
        }
    }
    return 0;
}