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


void PoNegaNeu(){
cout << "Positive, Negative or Neutral" << endl;
cout << "-----------------------------" << endl;
cout << "Enter a number: ";
}
// with argument and no return value
void PoNegaNeu2(int num){
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
}

void OddEven(){
cout << "Odd or Even" << endl;
cout << "-----------------------------" << endl;
cout << "Enter a number: ";
}
// no argument and and returns a value
string OddEven2(){
    int Num;
    string ODD = "is Odd", EVEN = "is Even";
    cin >> Num;

    if (Num%2==0){
        cout << Num;
        return EVEN;
    }
    else{
        cout << Num << " is Odd"<< endl<< endl;
        return ODD;
    }
}

void num3(){
cout << "Largest among 3 numbers" << endl;
cout << "-----------------------------" << endl;

}
// with argument and return a value
int num33(int numOne, int numTwo, int numThree){

    if (numOne>numTwo){
        if (numOne>numThree){
            return numOne;
        }
        else {
            return numThree;
        }
    }
    else{
        if(numTwo>numThree){
            return numTwo;
        }
        else {
            return numThree;
        }
    }
}

void num2(){
int num1, num2;
cout << "Largest among 2 numbers" << endl;
cout << "-----------------------------" << endl;
}
// with argument and return a value
int num22(int n1, int n2){
     if (n1>n2){
        return n1;
    }
    else {
        return n2;
    }
}

void Prime(){
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

}

void Ave(){
    double prelim, midterm, finals, average;
cout << "Average Calculator" << endl;
cout << "-----------------------------" << endl;
}
// with arguments and no return value
void Ave2(double prelim, double midterm, double finals){
    double average;
    average = (prelim+midterm+finals)/3;
    cout << "Average: "<< average << endl;
    if (average<75){
        cout << "Failed"<< endl<< endl;
    }
    else {
        cout << "Passed"<< endl<< endl;
    }
}

void Com(){
cout << "Salesman Commission Calculator" << endl;
cout << "-----------------------------" << endl;
}
//return a value and have an argument
double Com2(double usold, double uprice){
    double totalSales= 0, commision=0;
    
    totalSales = usold * uprice;

    if (totalSales<=10000){
        return totalSales * 0.10;
    }
    else if (totalSales<=15000){
        return totalSales * 0.15;
    }
    else if(totalSales<=20000){
        return totalSales * 0.20;
    }
    else{
        return  totalSales * 0.30;
    }
}
double Com3(double usold, double uprice){
    double totalSales;
    totalSales = usold * uprice;
    return totalSales;
}
//no argument and no return value
void VoCo(){
cout << "Vowel or Consonant" << endl;
cout << "-----------------------------" << endl;
}
// no argument and return a value
string VoCo2(){
    char letter;
    string VOWEL = " is Vowel", CONSO = " is Consonant";

    cout << "Enter a leter: ";
    cin >> letter;
    if(letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' || letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U'){
        cout << letter; 
        return VOWEL;
    }
    else{
        cout << letter; 
        return CONSO;
    }
}

    void PUP(){   float Prelim, Midterm, Finals, ave=0;
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
    PoNegaNeu();
    int w;
    cin >> w;
    PoNegaNeu2(w);//with argument and no return value
    getch();
    break;

    case 2: system("cls");
    OddEven();
    cout << OddEven2() << endl << endl;// no argument and and returns a value
    getch();
    break;

    case 3: system("cls");
    num3();
    int h,i,j;
    cout << "Enter first number: ";
    cin >> h;
    cout << "Enter second number: ";
    cin >> i;
    cout << "Enter third number: ";
    cin >> j;
    cout << "The largest is " << num33(h,i,j) << endl<< endl;//with argument and returns a value
    getch();
    break;

    case 4: system("cls");
    num2();
    int q, r;
    cout << "Enter first number: ";
    cin >>q;
    cout << "Enter second number: ";
    cin >>r;
    cout << "The largest is " << num22(q,r) << endl<< endl; // with argument and return a value
    getch();
    break;

    case 5: system("cls");
    Prime();
    getch();
    break;

    case 6: system("cls");
    Ave();
    double a,b,c;
    cout << "Input prelim: ";
    cin >> a;
    cout << "Input midterm: ";
    cin >> b;
    cout << "Input finals: ";
    cin >> c;
    Ave2(a,b,c); //with argument and no return value
    getch();
    break;

    case 7: system("cls");
    Com();
    int x,y;
    cout << "Enter unit sold: ";
    cin >> x;
    cout << "Enter unit price: ";
    cin >> y;
    cout << "Total sales:" << Com2(x,y) << endl;    
    cout << "Commission:" << Com2(x,y) << endl << endl;//with argument and returns a value
    getch();
    break;

    case 8: system("cls");
    VoCo();
    cout<< VoCo2() << endl << endl; // no argument and returns a value 
    break;

    case 9:system("cls");
    PUP();
    getch();
    break;
    
    case 10:
    exit(0);

    default:system("cls");
    cout << " Invalid Entry, please try again";
    goto leo;
}
}while(choice<10);


return 0;
}
