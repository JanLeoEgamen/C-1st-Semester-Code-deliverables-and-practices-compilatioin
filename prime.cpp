// Jan Leo Egamen
//Program that will input for a number and then Identify whether Prime Number or not
#include <iostream>
using namespace std;

int main(){
    int num, factor = 0;

    cout << "Enter number:";
    cin >> num;
if (num==0){
cout << num << " is not Prime";
}
else{
    for (int i=2; i < num; i++){
        if (num%i==0){
            factor++; //or factor = factor+1;
        }
        
    }
    if (factor>1){
        cout << num << " is not Prime";
    }
    else{
        cout << num << " is Prime";
}
}
    return 0;
}