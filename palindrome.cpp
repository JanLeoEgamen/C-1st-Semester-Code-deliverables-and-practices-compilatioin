#include <iostream>
#include <string>

using namespace std;

int main(){
    int i = 0, length;
    string word;
    bool pal = true;

    cout << "Enter a word";
    cin >> word;
    length = word.length() - 1;
    for (int i = 0; i <= length; i++, length--){
        if(word[i] != word[length]){
            pal = false;
        }
    }
    if (pal){
        cout << "Word is Palindrome";
    } else {
        cout << "Not a palindrome";
    }
}