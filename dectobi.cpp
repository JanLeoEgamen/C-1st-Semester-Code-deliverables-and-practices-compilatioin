// this is my practice converting decimal to binary
#include <iostream>
using namespace std;

int main(){
    int bin[2] = {0,1}, dec;
    cout << "Enter decimal:"; 
    cin >> dec;
    
    cout << "Binary is: ";
    for (dec; dec > 0; dec = dec/2){
        if (dec%2==0){
            cout << bin[0];
        }
        else{
            cout << bin[1];
        }
    }
    cout << "   (please read it backward)";
    

    return 0;
}