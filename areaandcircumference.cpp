// Jan Leo Egamen 
// Program that will input for the diameter of a circle then compute for the area and circumference. pi = 3.14159265359
#include <iostream>
using namespace std;

int main(){
    float diameter, r, pi = 3.14, area, circumference;
    
    cin >> diameter;
    
    r = diameter / 2;
    
    area = pi * (r * r);
    circumference = pi * diameter;
    
    cout << area << endl << circumference;

    return 0;
}