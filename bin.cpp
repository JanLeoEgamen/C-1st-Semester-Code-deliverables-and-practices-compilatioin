#include <iostream>
using namespace std;

int main(){
    int dec, bin[10], s1;
    cout << "Enter Decimal: ";
    cin >> dec;

    for (s1; dec>0; s1++){
        bin[s1] = dec %2;
        dec = dec/2;
    }
    cout << "Binary: ";
    for(s1=s1-1; s1>0; s1-- ){
        cout << bin[s1];
    }
    return 0;
}