//Jan Leo Egamen
//Program that compute and display the area and perimeter of a rectangle by taking length and width as an input from user.
#include <iostream>
using namespace std;

int main(){
    float l, w, area, perimeter;
    
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;
    
    area = l*w;
    perimeter = 2* (l + w);
    
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter;
    
    return 0;
}