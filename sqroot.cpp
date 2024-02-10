// Jan Leo Egamen
//Program to find the roots of a quadratic equation by taking a, b and c as an input from user
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a, b, c, D, r1, r2, realPart, imaginaryPart;
    
    cout << "Problem 3:"<<endl;
    cout << "Compute  for the roots of quadratic equation: "<<endl;
    cout << "---------------------------------"<<endl;
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
    return 0;
}