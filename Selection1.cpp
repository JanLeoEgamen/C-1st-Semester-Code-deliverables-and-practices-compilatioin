//  Jan Leo Egamen || BSIT 1-1
#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace std;
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

int main(){
int choice;
leo:
do{
    getch();
    system("cls");
    Box(1,24,1,79);
gotoxy(30,4);
cout << "Main Menu" << endl;
gotoxy(28,5);
cout <<"1 - Positive, Negative or Neutral" << endl;
gotoxy(28,6);
cout <<"2 - Odd or Even" << endl;
gotoxy(28,7);
cout <<"3 - largest among 3 numbers" << endl;
gotoxy(28,8);
cout <<"4 - largest among 2 numbers" << endl;
gotoxy(28,9);
cout <<"5 - Prime Number or not " << endl;
gotoxy(28,10);
cout <<"6 - Average Computer " << endl;
gotoxy(28,11);
cout <<"7 - Commission of Salesman(Revised) " << endl;
gotoxy(28,12);
cout <<"8 - Vowel or Consonant" << endl;
gotoxy(28,13);
cout <<"9 - PUP Average computer" << endl;
gotoxy(28,14);
cout <<"10 - Exit" << endl;
gotoxy(28,15);
cout <<"Enter Choice: ";
cin >> choice;

switch (choice){

    case 1: system("cls");
    int num;
cout << "Positive, Negative or Neutral" << endl;
cout << "-----------------------------" << endl;

    cout << "Enter a number: ";
    cin >> num;

    if (num==0){
        cout << num << " is Neutral"<< endl<< endl;
    }
    else {
        if(num>0){
            cout << num << " is Positive"<< endl<< endl;
        }
        else{
            cout << num << " is Negative"<< endl<< endl;
        }
    }
    break;


    case 2: system("cls");
    int Num;
cout << "Odd or Even" << endl;
cout << "-----------------------------" << endl;

    cout << "Enter a number: ";
    cin >> Num;

    if (Num%2==0){
        cout << Num << " is Even"<< endl<< endl;
    }
    else{
        cout << Num << " is Odd"<< endl<< endl;
    }
    break;

    case 3: system("cls");
    int numOne, numTwo, numThree;
cout << "Largest among 3 numbers" << endl;
cout << "-----------------------------" << endl;
    cout << "Enter first number: ";
    cin >> numOne;
    cout << "Enter second number: ";
    cin >> numTwo;
    cout << "Enter third number: ";
    cin >> numThree;
    if (numOne>numTwo){
        if (numOne>numThree){
            cout << numOne << " is the largest"<< endl<< endl;
        }
        else {
            cout << numThree << " is the largest"<< endl<< endl;
        }
    }
    else{
        if(numTwo>numThree){
            cout << numTwo << " is the largest"<< endl<< endl;
        }
        else {
            cout << numThree << " is the largest"<< endl<< endl;
        }
    }
    break;


    case 4: system("cls");
    int num1, num2;
cout << "Largest among 2 numbers" << endl;
cout << "-----------------------------" << endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    if (num1>num2){
        cout << num1 << " is the largest"<< endl<< endl;
    }
    else {
        cout << num2 << " is the largest"<< endl<< endl;
    }
    break;


    case 5: system("cls");
    int n, f;
cout << "Prime or not" << endl;
cout << "-----------------------------" << endl;

    cout << "Enter number:";
    cin >> n;
    if (n==0){
    cout << n << " is not Prime"<< endl;
    }
    else{
        for (int i=2; i < n; i++){
            if (n%i==0){
                f++; //or factor = factor+1;
            }
            
        }
    if (f>1){
        cout << n << " is not Prime"<< endl<< endl;
           }
    else{
        cout << n << " is Prime"<< endl<< endl;
        }
        }   
    break;


    case 6: system("cls");
    int prelim, midterm, finals, average;
cout << "Average Calculator" << endl;
cout << "-----------------------------" << endl;
    cout << "Input prelim: ";
    cin >> prelim;
    cout << "Input midterm: ";
    cin >> midterm;
    cout << "Input finals: ";
    cin >> finals;

    average = (prelim+midterm+finals)/3;
    cout << "Average: "<< average << endl;
    if (average<75){
        cout << "Failed"<< endl<< endl;
    }
    else {
        cout << "Passed"<< endl<< endl;
    }
    break;


    case 7: system("cls");
    float usold, uprice, totalSales, commision;
cout << "Salesman Commission Calculator" << endl;
cout << "-----------------------------" << endl;

    cout << "Enter unit sold: ";
    cin >> usold;
    cout << "Enter unit price: ";
    cin >> uprice;
    totalSales = usold * uprice;

    cout << "Total sales: "<< totalSales << endl;

    if (totalSales<=10000){
        commision = totalSales * 0.10;
        cout << "Commission: " << commision<< endl<< endl;
    }
    else if (totalSales<=15000){
        commision = totalSales * 0.15;
        cout << "Commission: " << commision<< endl<< endl;        
    }
    else if(totalSales<=20000){
        commision = totalSales * 0.20;
        cout << "Commission: " << commision<< endl<< endl;
    }
    else{
        commision = totalSales * 0.30;
        cout << "Commission: " << commision<< endl<< endl;
    }
    break;


    case 8: system("cls");
    char letter;
cout << "Vowel or Consonant" << endl;
cout << "-----------------------------" << endl;

    cout << "input a letter: ";
    cin >> letter;

    if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U'){
        cout << letter << " is vowel"<< endl<< endl;
    }
    else{
        cout << letter << " is consonant"<< endl<< endl; 
    }
    break;

    case 9: system("cls");
 {   float Prelim, Midterm, Finals, ave=0;
cout << "PUP GWA Computer" << endl;
cout << "-----------------------------" << endl;    
    cout << "Input prelim: ";
    cin >> Prelim;
    cout << "Input midterm: ";
    cin >> Midterm;
    cout << "Input finals: ";
    cin >> Finals;
    ave = (Prelim+Midterm+Finals)/3;

    if(ave>=97 && ave<=100){
        cout << "Exellent! your GWA is 1.0"<< endl;
    }
    else if(ave>=94 && ave<=96){
        cout << "Exellent! your GWA is 1.25"<< endl;
    }
    else if(ave>=91 && ave<=93){
        cout << "Very Good! your GWA is 1.5"<< endl;
    }
    else if(ave>88 && ave<=90){
        cout << "Very Good! your GWA is 1.75"<< endl;
    }
    else if(ave>=85 && ave<=87){
        cout << "Good! your GWA is 2.0"<< endl;
    }
    else if(ave>=82 && ave<=84){
        cout << "Good! your GWA is 2.25"<< endl;
    }
    else if(ave>=76 && ave<=78){
        cout << "Satisfactory! your GWA is 2.5"<< endl;
    }
    else if(ave>=97 && ave<=100){
        cout << "Satisfactory your GWA is 2.75"<< endl;
    }
    else if(ave>=97 && ave<=100){
        cout << "Passed! your GWA is 3.0"<< endl;
    }
    else{
        cout << "INCOMPLETE, Please contact your Prof. " << endl;
    }
 }
    break;
    case 10:
    exit(0);
    default:
    system("cls");
    cout <<"invalid entry...";
    goto leo;
}
}while(choice<10);


return 0;
}