#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

// Gotoxy and Box
void gotoxy(int x, int y) {
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




// For loops Statements
void ForTriangle(int row){
        for(int a =1;a<=row;a++){

        for (int b=1; b<=a; b++){
            cout << "* ";
            Sleep(30);
        }
        cout << endl;
    }
}

void ForInverted(int row){
            
        for(int a =1;a<=row;a++){

        for (int b=a; b<=row; b++){
            cout << "* ";
            Sleep(30);
        }
        cout << endl;
    }
}

void ForTriangleNumber(int row){
        for(int a =1;a<=row;a++){

        for (int b=1; b<=a; b++){
            cout << a << " ";
            Sleep(30);
        }
        cout << endl;
    }
}

void ForTriangleNumber2(int row){
        for(int a =1;a<=row;a++){

        for (int b=1; b<=a; b++){
            cout << b << " ";
            Sleep(30);
        }
        cout << endl;
    }
}

void ForInvertedNumber(int row){
            
        for(int a =1;a<=row;a++){

        for (int b=a; b<=row; b++){
            cout << a << " ";
            Sleep(30);
        }
        cout << endl;
    }
}

void ForInvertedNumber2(int row){
            
        for(int a =1;a<=row;a++){

        for (int b=a; b<=row; b++){
            cout << b << " ";
            Sleep(30);
        }
        cout << endl;
    }
}

//While Loop
void WhileTriangle(int row){
        int a = 1;
    while(a<=row){
        int b = 1;
    while(b<=a){
        cout <<"* ";
        Sleep(30);
        b++;
    }
        cout << endl;
        a++;
}
}

void WhileInverted(int row){
        int a = 1;
    while(a<=row){
        int b=a;
    while(b<=row){
            cout << "* ";
            Sleep(30);
            b++;
    }
        cout << endl;
        a++;
}
}

void WhileTriangleNumber(int row){
        int a = 1;
    while(a<=row){
        int b=1;
    while(b<=a){
        cout << a <<" ";
        Sleep(30);
        b++;
    }
        cout << endl;
        a++;
}
}

void WhileTriangleNumber2(int row){
        int a = 1;
    while(a<=row){
        int b=a;
    while(b<=row){
        cout << b <<" ";
        Sleep(30);
        b++;
    }
    cout << endl;
    a++;
}

}

void WhileInvertedNumber(int row){
        int a = 1;
    while(a<=row){
        int b=a;
    while(b<=row){
        cout << a <<" ";
        Sleep(30);
        b++;
    }
    cout << endl;
    a++;
}
}

void WhileInvertedNumber2(int row){
        int a = 1;
    while(a<=row){
        int b=a;
    while(b<=row){
        cout << b <<" ";
        Sleep(30);
        b++;
    }
    cout << endl;
    a++;
}
}

// Do while 
void DoWhileTriangle(int row){
        int a=1;
    do {
        int b=1;
        do {
            cout << "* ";
            Sleep(30);
            b++;
        }while(b<=a);
            cout << endl;
            a++;
    }while(a<=row);
}

void DoWhileInverted(int row){
    int a=1;
    do {
        int b=a;
        do {
            cout << "* ";
            Sleep(30);
            b++;
        }while(b<=row);
            cout << endl;
            a++;
    }while(a<=row);
}

void DoWhileTriangleNumber(int row){
        int a=1;
    do {
        int b=1;
        do {
        cout << a << " ";
        Sleep(30);
        b++;
        }while(b<=a);
        cout << endl;
        a++;
    }while(a<=row);
}

void DoWhileTriangleNumber2(int row){
        int a=1;
    do {
        int b=1;
        do {
        cout << b <<" ";
        Sleep(30);
        b++;
        }while(b<=a);
        cout << endl;
        a++;
    }while(a<=row);
}

void DoWhileInvertedNumber(int row){
        int a=1;
    do {
        int b=a;
        do {
        cout << a <<" ";
        Sleep(30);
        b++;
        }while(b<=row);
        cout << endl;
        a++;
    }while(a<=row);
}

void DoWhileInvertedNumber2(int row){
    int a=1;
    do {
        int b=a;
        do {
        cout << b <<" ";
        Sleep(30);
        b++;
        }while(b<=row);
        cout << endl;
        a++;
    }while(a<=row);
}
void Account() // this function is for creating and entering username and pin
{
    int Attempt=3;
    int pin, pin2;
    string username, username2;

    Box(1,24,1,79);
    Box(5,20,5,75);
    // for creating account
    
    gotoxy(23,10);
    cout << "Create User Name: ";
    cin >> username;
    gotoxy(23,12);
    cout << "Create Pin: ";
    cin >> pin;

    system("cls");

    cout << "Account Has been Created";
    getch();

    enterAgain: // This is the label para bumalik dito kapag incorrect yung pin at username

    system("cls");
    Box(1,24,1,79);
    Box(5,20,5,75);

    gotoxy(23,10);
    cout << "Enter User Name: ";
    cin >> username2;
    gotoxy(23,12);
    cout << "Enter Pin: ";
    cin >> pin2;

    if(Attempt==0){ // automatic na maglolock yung account pag hindi tugma yung inenter na info sa created account
        system("cls");
        cout << "Account Locked";
        exit(0);
    }

    if(username!=username2){
        Attempt--;
        gotoxy(23,14);  
        cout << "Incorrect username! " << endl;
        gotoxy(23,16);
        cout << "Attempt Left: " << Attempt;
        getch();
        
        goto enterAgain;
    }
    else if(pin!=pin2){
        Attempt--;
        gotoxy(23,14);
        cout << "Incorrect pin!" << endl;
        gotoxy(23,16);
        cout << "Attempt Left: " << Attempt;
        getch();
        
        goto enterAgain;
    }
}

//main menu 
void Mainmenu(){
    Box(1,24,1,79);
    Box(5,20,5,75);
    gotoxy(34,10);
    cout << "Main Menu" << endl;
    gotoxy(31,11);
    cout << "A - Nested For" << endl;
    gotoxy(31,12);
    cout << "B - Nested While" << endl;
    gotoxy(31,13);
    cout << "C - Nested Do While" << endl;
    gotoxy(31,14);
    cout << "D - Exit" << endl;
}

// for sub menu para mapaiksi yung sa switch at isang calling nalang sa kanila
void Mainmenu2(){
    Box(1,24,1,79);
    Box(5,20,5,75);
    gotoxy(23,9);
    cout << "A - Triangle" << endl;
    gotoxy(23,10);
    cout << "B - Inverted Triangle" << endl;
    gotoxy(23,11);
    cout << "C - Number(Same per line)" << endl;
    gotoxy(23,12);
    cout << "D - Number(not same per line)" << endl;
    gotoxy(23,13);
    cout << "E - Inverted Number(Same per line)" << endl;
    gotoxy(23,14);
    cout << "F - Inverted Number(not same per line)" << endl;
    gotoxy(23,15);
    cout << "G - Exit" << endl;
}

int main(){ 

char choice, ForChoice, WhileChoice, DoWhileChoice;
Account();
do{
main:
getch();
system("cls");
Mainmenu();
gotoxy(31,15);
cout << "Enter Choice: ";
cin >> choice;


switch (choice){    // switch para sa Main choice 
case 'A':
do{
    formain: // label para bumalik sa enter choice ng for loops
    getch();
    system("cls");
    gotoxy(31,8);
    cout << "For Loops" << endl;
    Mainmenu2();
    gotoxy(31,16);
    cout << "Enter Choice: ";
    cin >> ForChoice;

            switch (ForChoice) // switch para sa for loops
            {
                case 'A': system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForTriangle(r);}
                break;  

                case 'B': system("cls");    // Inverted Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForInverted(r);}
                break;

                case 'C': system("cls");    // Triangle na numbers magkakasame per line
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForTriangleNumber(r);}
                break;

                case 'D': system("cls");    // Triangle na numbers na hindi magkakasame per line
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForTriangleNumber2(r);}
                break;

                case 'E': system("cls");    // Inverted Triangle na numbers magkakasame per line
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForInvertedNumber(r);}
                
                break;
                case 'F': system("cls");    // Inverted Triangle na numbers na hindi magkakasame per line
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    ForInvertedNumber2(r);}
                
                break;
                case 'G':
                goto main;
                
                break;

                default: system("cls");
                    cout << " Invalid entry!";
                    goto formain;
                break;
                
            }
         }while(ForChoice<'G');
break;

case 'B':system("cls"); 
do{
    whilemain: // label para bumalik sa enter choice ng while loops
    getch();
    system("cls");
    gotoxy(31,8);
    cout << "While Loops" << endl;
    Mainmenu2();
    gotoxy(31,16);
    cout << "Enter Choice: ";
    cin >> WhileChoice;

            switch (WhileChoice){
                case 'A': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileTriangle(r);}
                break;

                case 'B': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileInverted(r);}
                break;

                case 'C': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileTriangleNumber(r);}
                break;
                
                case 'D': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileTriangleNumber2(r);}
                break;

                case 'E': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileInvertedNumber(r);}
                break;

                case 'F': system("cls");    
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    WhileInvertedNumber2(r);}
                break;

                case 'G': 
                goto main;
                break;

                default:system("cls");
                    cout << " Invalid entry!";
                    goto whilemain;
                break;
            }
}while(WhileChoice<'G');
break;

case 'C':
do{
    dowhilemain:
    getch();
    system("cls");
    gotoxy(31,8);
    cout << "Do While Loops" << endl;
    Mainmenu2();
    gotoxy(31,16);
    cout << "Enter Choice: ";
    cin >> DoWhileChoice;

            switch (DoWhileChoice){
                case 'A': system("cls"); 
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileTriangle(r);}
                break;

                case 'B': system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileInverted(r);}
                break;
                
                case 'C':system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileTriangleNumber(r);}
                break;
                
                case 'D': system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileTriangleNumber2(r);}
                break;
                
                case 'E': system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileInvertedNumber(r);}
                break;

                case 'F':system("cls");    // Triangle
                    {int r;
                    cout << " Enter Row: ";
                    cin >> r;
                    DoWhileInvertedNumber2(r);}
                break;

                case 'G':
                goto main;
                break;
                default:system("cls");
                    cout << " Invalid entry!";
                    goto dowhilemain;
                break; 
            }
}while(DoWhileChoice<'G');
break;

case 'D':
exit(0);
break;

default:
gotoxy(34,16);
cout << "Invalid!";
goto main;
break;

}
    }while(choice<'D');
}