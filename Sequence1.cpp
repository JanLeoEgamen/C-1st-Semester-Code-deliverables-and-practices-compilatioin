//  Jan Leo Egamen || BSIT 1-1
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;
//functions for box
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


// main function 
int main(){
    int choices;
    int n1, n2, n3, n4;
    float Total, Ave;
    int dividend, divisor, quo, rem;
    float a, b, c, D, r1, r2, realPart, imaginaryPart;
    int num, square, cube;
    float l, w, area, perimeter;
    double temp;
    string sname;
    float Enum, numOfhoursWorked, ratePerhour, grossPay, netPay;
    float num1, num2, sum, difference, product, quotient;
    float diameter, r, pi = 3.14159, circumference;
    float celsius, fahrenheit;
    string ename;
    float snum, usold, uprice, totalSales;
    float orderNum, amountOforder, amountTender, change;
leo:
do{
    getch();
    system("cls");
    Box(1,24,1,79);
    
    gotoxy(30,3);
        cout << "Main Menu" << endl;
        gotoxy(28,4);
        cout << "1 - Total average of four numbers"<< endl;
        gotoxy(28,5);
        cout << "2 - Quotient and remainder"<< endl;
        gotoxy(28,6);
        cout << "3 - Roots of quadratic equation         "<< endl;
        gotoxy(28,7);
        cout << "4 - Square and cube of a number         "<< endl;
        gotoxy(28,8);
        cout << "5 - Area and perimeter of the rectangle "<< endl;
        gotoxy(28,9);
        cout << "6 - Swapping the value of two variables "<< endl;
        gotoxy(28,10);
        cout << "7 - Gross and Net Pay of the employee   "<< endl;
        gotoxy(28,11);
        cout << "8 - S(+), D(-), P(*) and Q(/)"<< endl;
        gotoxy(28,12);
        cout << "9 - Area and circumference "<< endl;
        gotoxy(28,13);
        cout << "10 - Celsius to fahrenheit"<< endl;
        gotoxy(28,14);
        cout << "11 - Total sales"<< endl;
        gotoxy(28,15);
        cout << "12 - Change 12"<< endl;
        gotoxy(28,16);
        cout << "13 - Exit"<< endl;
        gotoxy(28,17);
        cout << "Enter your choices:";
    cin >> choices;

    switch(choices){
    case 1: system("cls");
    cout << "Problem 1:"<<endl;
    cout << "Compute the total average of four numbers:"<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input the first two numbers (separated by space):";
    cin >> n1 >> n2;
    cout << "Input the last two numbers (separated by space):";
    cin >> n3 >> n4;
    
    Total = n1+n2+n3+n4;
    Ave = Total/4;

    cout << "The total of four numbers is:"<<Total<<endl;
    cout << "The average of four numbers is:"<< Ave<< endl;
    cout << "----------------------------"<<endl;
    break;


    case 2: system("cls");
    cout << "Problem 2:"<<endl;
    cout << "Compute the quotient and remainder:"<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input dividend:";
    cin >> dividend;
    cout << "Input divisor:";
    cin >> divisor;

    quo = dividend/divisor;
    rem = dividend%divisor;

    cout << "The quotient of the division is:"<<quo<<endl;
    cout << "The remainder of the division is:"<<rem<<endl;
    cout << "----------------------------"<<endl;
    break;


    case 3: system("cls");
    cout << "Problem 3:"<<endl;
    cout << "Compute  for the roots of quadratic equation: "<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input the value of a, b and c (separated by space):";
    cin >> a >> b >> c;
    D = b * b - 4* a * c;
    
    if (D<0) {
    realPart = (float) -b/(2*a);
    imaginaryPart =sqrt(-D)/(2*a);
    cout << "Roots are complex and different." << endl;
    cout << "Root 1 = " << realPart << " + " << imaginaryPart << "i" <<endl;
    cout << "Root 2 = " << realPart << " - " << imaginaryPart << "i" <<endl;   
    }
    else if (D==0) {
    r1 = (-b + sqrt(D)) / (2*a);  
    cout << "Roots are real and same." << endl;
    cout << "Root 1 and Root 2 = " << r1 << endl;
    }
    else{
    realPart = (float) -b/(2*a);
    imaginaryPart =sqrt(-D)/(2*a);
    cout << "Roots are real and different." << endl;
    cout << "Root 1 = " << r1 << endl;
    cout << "Root 2 = " << r2 << endl;  
    }
    cout << "----------------------------"<<endl;
    break;


    case 4: system("cls");
    cout << "Problem 4:"<<endl;
    cout << "Compute the square and cube of the number:"<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input a number: ";
    cin >> num;
    
    square = num * num;
    cube = num * num * num;
    
    cout << "square: " << square << endl;
    cout << "cube: " << cube << endl;
    cout << "----------------------------"<<endl;
    break;


    case 5: system("cls");
    cout << "Problem 5:"<<endl;
    cout << "Compute the area and perimeter of the rectangle:"<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input length: ";
    cin >> l;
    cout << "Input width: ";
    cin >> w;
    
    area = l*w;
    perimeter = 2* (l + w);
    
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter<< endl;
    cout << "----------------------------"<<endl;
    break;
    

    case 6: system("cls");
    cout << "Problem 6:"<<endl;
    cout << "Swapping the vakue of the variables:"<<endl;
    cout << "----------------------------"<<endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    
    temp = a;
    a = b;
    b = temp;
    cout << "Swapped values: "<< endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "----------------------------"<<endl;
    break;


    case 7: system("cls");
    cout << "Problem 7:"<<endl;
    cout << "Compute the Gross and Net Pay of the employee:"<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input Employee name: ";
    cin >> ename;
    cout << "Input Employee number: ";
    cin >> Enum;
    cout << "Input number of hours worked: ";
    cin >> numOfhoursWorked;
    cout << "Input rate per hour: ";
    cin >> ratePerhour;
    
    grossPay = numOfhoursWorked * ratePerhour;
    netPay = grossPay - (grossPay * 0.1);
    
    cout << "Gross Pay: " << grossPay << endl;
    cout << "Net Pay: " << netPay << endl;
    cout << "----------------------------"<<endl;
    break;


    case 8: system("cls");
    cout << "Problem 8:"<<endl;
    cout << "Compute the sum, difference, product and quotiet:"<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input first number: ";
    cin >> num1;
    cout << "Input last number: ";
    cin >> num2;
    
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;
    
    cout <<"The sum of two numbers is: " << sum << endl;
    cout <<"The difference of two numbers is: " << difference << endl;
    cout <<"The product of two numbers is: " << product << endl;
    cout <<"The quotient of two numbers is: " << quotient << endl;
    cout << "----------------------------"<<endl;
    break;


    case 9: system("cls");
    cout << "Problem 9:"<<endl;
    cout << "Compute the area and circumference of the circle:"<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input diameter: ";
    cin >> diameter;
    
    r = diameter / 2;
    
    area = pi * (r * r);
    circumference = pi * diameter;
    
    cout << "The area of the circle is: " << area << endl; 
    cout << "The circumference of the circle is: " << circumference << endl;
    cout << "----------------------------"<<endl;
    break;
    

    case 10: system("cls");
    cout << "Problem 10:"<<endl;
    cout << "Convert celsius to fahrenheit:"<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input celsius: ";
    cin >> celsius;
    
    fahrenheit = (celsius * 1.8) + 32;
    cout << celsius << " celsius is equal to " << fahrenheit << " fahrenheit" << endl;
    cout << "----------------------------"<<endl;
    break;

    case 11: system("cls");
    cout << "Problem 11:"<<endl;
    cout << "Compute for the total sales:"<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input salesman number: ";
    cin >> snum;
    cout << "Input salesman name: ";
    cin >> sname;
    cout << "Input unit sold: ";
    cin >> usold;
    cout << "Input unit price: ";
    cin >> uprice;

    totalSales = usold * uprice;

    cout << "Total sales: " << totalSales << endl;
    cout << "----------------------------"<<endl;
    break;

    case 12: system("cls");
    cout << "Problem 12:"<<endl;
    cout << "Compute for the change:"<<endl;
    cout << "----------------------------"<<endl;
    cout << "Input order number: ";
    cin >> orderNum;
    cout << "Input amount of order: ";
    cin >> amountOforder;
    cout << "Input amount tender: ";
    cin >> amountTender;
    
    change = amountTender - (orderNum * amountOforder);
    
    cout << "Change: " << change << endl;
    cout << "----------------------------"<<endl;
    break; 

    case 13:
    exit(0);

    default:system("cls");
    cout << "INVALID ENTRIES, PLEASE RETRY!";
    goto leo;
    break;
    
    }
}while(choices<13);
    return 0;
}