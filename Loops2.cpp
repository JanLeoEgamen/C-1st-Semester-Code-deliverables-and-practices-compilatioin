#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <conio.h>
using namespace std;
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

    void Box(int x1, int x2, int y1, int y2){
            for (x1=x1;y1<=y2;y1++){
                gotoxy(y1,x1);cout <<"*";
                gotoxy(y1,x2);cout <<"*";

                Sleep(10);

            }
            for (y1=x1;x1<=x2;x1++){
                gotoxy(y2,x1);cout <<"*";
                gotoxy(y1,x1);cout <<"*";

                Sleep(10);


            }


    }

void Reverse(){   cout << "Reverse of a number" << endl;
    cout << "----------------------------"<< endl;
 }
 // return a value and with argument
int Reverse2(int Num){
    int rev=0, r;
while (Num!=0){
    r= Num%10;
    rev = ((rev*10) + r);
    Num = Num /10;
}
return rev;
}

void SumofEven(){   cout << "Sum of all even numbers" << endl;
    cout << "----------------------------"<< endl;

}
// return a value without argument
int SumofEven2(){
    int Nums, sum=0;
    cout << "Enter number: ";
    cin >> Nums;

for(int number =1; number <=Nums; number++){
    if(number%2==0){
        sum = sum + number;
    }
}
cout << "Sum of all even numbers: " ;
return sum;
}

void SumofEvenSquare(){   cout << "Sum of all the squared even numbers" << endl;
    cout << "----------------------------"<< endl;
    int N, n, M, square, sumOfSquare=0;
    cout << "Enter first number: ";
    cin >> N;
    cout << "Enter second number: ";
    cin >> M;
    n = N;
    while (N<=M){
    if (N%2==0){
        square = N*N;
        sumOfSquare =  sumOfSquare + square;
    }
    N++; // or N = N+1
}
cout << "The sum of square of all even number from "<< n << " to " << M << " is: " << sumOfSquare << endl;
}

void SumofEventoInput(){   
    cout << "Sum of all the even numbers from 1 to inputted number" << endl;
    cout << "----------------------------"<< endl;
}
int SumofEventoInput2(int N){   
    int sum=0;
    for(int num =1; num <=N; num++){
        if(num%2==0){
            sum = sum + num;
        }
    }
        return sum;
}

void Onetoten(){   cout << "Display numbers from 1-10" << endl;
    cout << "----------------------------"<< endl;
    int a = 1;
    do {
        cout << a;
        a = a +1;
    }while(a<11);
    cout << endl << endl;}

void AtoZ(){   cout << "Display A - Z" << endl;
    cout << "----------------------------"<< endl;
    for (char alp ='A'; alp<='Z'; alp++ ){
    cout << alp << " ";
}
    cout << endl<< endl;
        }

void Palindrome(){   cout << "Palindrome word checker" << endl;
    cout << "----------------------------"<< endl;
}
// no argument and return a value
string Palindrome2(){
    int i = 0, length;
    string word, p=" is palindrome", np=" is not palindrome";
    bool pal = true;

    cout << "Enter a word: ";
    cin >> word;
    length = word.length() - 1;
    for (int i = 0; i <= length; i++, length--){
        if(word[i] != word[length]){
            pal = false;
        }
    }
    if (pal){
        cout << word;
        return p;
    } else {
        cout << word;
        return np;
    }
}

void Factorial(){   cout << "Factorial of a number" << endl;
    cout << "----------------------------"<< endl;
}
// return    a value and with argument
int Factorial2(int n1){
    int  factor = 1;
    for(n1; n1 >0; n1--){
        factor = factor * n1;
    }
    return factor;
}

void Binary(){   cout << "Decimal to Binary Conversion" << endl;
    cout << "----------------------------"<< endl;
}// no return a value and with argument
void Binary2(int dec){
    int bin[10], s1=0;
    for (s1; dec!=0; s1++){
        bin[s1] = dec %2;
        dec = dec/2;
    }
    cout << "Binary: ";
    for(s1=s1-1; s1>=0; s1-- ){
        cout << bin[s1];
    } 
}
// no return a value and with argument
void Fibonacci(){   cout << "Fibonacci sequence" << endl;
    cout << "----------------------------"<< endl;
}
void Fibonacci2(int Nnn){
    int f1=0, f2=1, f3=0, in;
    cout << "Fibonacci Series: 0 ";
    for( in = 2; in <=Nnn; ++in){
        f3 = f1+f2;
        cout << f3 <<" ";
        f1= f2;
        f2=f3;
    }
    cout << endl;
}


int main(){
int choice;

leo:
do{system("cls");
Box(1,24,1,79);
gotoxy(30,4);
cout  << "Main Menu" << endl;
gotoxy(28,5);
cout  << "1 - Reverse of a number" << endl;
gotoxy(28,6);
cout  << "2 - Sum of all even numbers" << endl;
gotoxy(28,7);
cout  << "3 - Sum of all the squared even numbers" << endl;
gotoxy(28,8);
cout  << "4 - All Even numbers from 1 to inputted number " << endl;
gotoxy(28,9);
cout  << "5 - Display numbers from 1-10" << endl;
gotoxy(28,10);
cout  << "6 - Display A - Z" << endl;
gotoxy(28,11);
cout  << "7 - Palindrome word checker" << endl;
gotoxy(28,12);
cout << "8 - Factorial of a number" << endl;
gotoxy(28,13);
cout << "9 - Decimal to Binary Conversion" << endl;
gotoxy(28,14);
cout  << "10 - Fibonacci sequence" << endl;
gotoxy(28,15);
cout  << "11 - Exit" << endl;
gotoxy(28,16);
cout << "Enter Choice: ";
cin >> choice;

switch(choice){

case 1: system("cls");
Reverse();
int r;
cout << "Enter number: ";
cin >> r;
cout << "Reverse: "<< Reverse2(r) << endl << endl;// with argument and ruturn a value
getch();
break;

case 2: system("cls");
SumofEven();
cout << SumofEven2() << endl << endl; // no argument and ruturn a value
getch();
break;

case 3: system("cls");
SumofEvenSquare();
getch();
break;

case 4: system("cls");
SumofEventoInput();
int d;
cout << "Enter a number: ";
cin >> d;
cout << "Sum of all even numbers: " << SumofEventoInput2(d) << endl << endl; // with argument and return a value
getch();
break;

case 5: system("cls");
Onetoten(); //no argument and no return value
getch();
break;

case 6: system("cls");
AtoZ();//no argument and no return value
getch();
break;

case 7: system("cls");
Palindrome();
cout << Palindrome2()<< endl << endl;//no argument and returns value
getch();
break;

case 8: system("cls");
    Factorial();
    int a;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Factorial: " << Factorial2(a) << endl << endl; // return a value and with argument
getch();
break;

case 9: system("cls");
    Binary();
    int bn;
    cout << "Enter Decimal: ";
    cin >> bn;
    Binary2(bn); //no argument and no return value
getch();
break;

case 10: system("cls");
Fibonacci();
int g;
cout << "Enter a number: ";
cin >> g;
Fibonacci2(g); // with argument and no return value
getch();
break;


case 11:  system("cls");
exit(0);
break;

default:
cout << "Invalid Entry, Please Re-run the Program";
getch();
goto leo;
break;
}
}while(choice<12);
return 0;
}   