//Jan Leo Egamen
//Program that will identify if the inputted letter is a  Vowel or Consonant.
#include <iostream>
using namespace std;

int main(){
    char letter;

    cout << "input a letter: ";
    cin >> letter;

    if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U'){
        cout << letter << " is vowel";
    }
    else{
        cout << letter << " is consonant"; 
    }


    return 0;
}