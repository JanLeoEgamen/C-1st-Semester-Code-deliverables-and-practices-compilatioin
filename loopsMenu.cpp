#include <iostream>
using namespace std;

int main(){
int choice;
do{
cout << "Main Menu" << endl;
cout << "1 Reverse of a number" << endl;
cout << "2 Display A - Z" << endl;
cout << "3 Display all even numbers" << endl;
cout << "4 Exit" << endl;
cout << "Enter Choice: ";
cin >> choice;

switch(choice){
case 1: system("cls");
int reverse, r, Num;
cout << "Enter number: ";
cin >> Num;
do {
    r= Num%10;
    reverse = (reverse*10) + r;
    Num = Num /10;
}while( Num != 0);
cout << "Reverse: "<< reverse<< endl;
break;

case 2: system("cls");
for (char alp ='A'; alp<='Z'; alp++ ){
    cout << alp << " ";
}
cout << endl<< endl;
break;

case 3: system("cls");
    int N;
cout << "Enter number: ";
cin >> N;

for(int num =1; num <=N; num++){
    if(num%2==0){
        cout << num<< endl;
    }
}
break;

case 4: system("cls");
exit(0);
break;

default:
cout << "Invalid Entry, Please Re-run the Program";
break;
}
}while(choice<4);

}