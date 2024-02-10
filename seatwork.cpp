// Jan Leo Egamen
#include <iostream>
#include<iomanip>
using namespace std;
//function without argument that does not returns a value
void NoArgNoRets(){
    int num,square;
    cout << "Enter a number: ";
    cin >> num;
    square = num*num;
    cout << "Square: " << square<< endl;
}
//function without argument that returns a value
int NoArgWithRets(){
    int num, square;
    cout << "Enter a number: ";
    cin >> num;
    square = num*num;
    cout << "Square:";
    return square;
    // or return num*num 
}

//function with argument that does not returns a value
void WithArgNoRets(int num){
    int square;
    square = num*num;
    cout << "Square: " << square<< endl;
}
//function with argument that  returns a value
int WithArgAndRets(int num){
    return num*num;
}


int main(){
    char choice;
    do{
    cout << setw(45) <<"Main Menu" << endl;
    cout <<"A -  Square of a number using function without argument that does not returns a value."<<endl; 
    cout <<"B -  Square of a number using function without argument that returns a value."<<endl; 
    cout <<"C -  Square of a number using function with argument that does not returns a value."<<endl; 
    cout <<"D -  Square of a number using function with argument that  returns a value."<<endl; 
    cout <<"E- Exit"<<endl; 
    cout << "Enter choice:  ";
    cin >> choice;

    switch(choice){
        case 'A': system("cls");
        NoArgNoRets();
        break;

        case 'B': system("cls");
        cout <<NoArgWithRets()<<endl;
        break;

        case 'C': system("cls");
        int n;
        cout << "Enter a number: ";
        cin >> n;
        WithArgNoRets(n);
        break;

        case 'D': system("cls");
        int num;
        cout << "Enter a number: ";
        cin >> num;
        cout << "Square: "<< WithArgAndRets(num)<< endl;
        break;
        
        case 'E':
        exit (0);
        break;
        default:
        cout << "Invalid entries";
        exit (0);
    }

    }while(choice < 'E');

    return 0;
}