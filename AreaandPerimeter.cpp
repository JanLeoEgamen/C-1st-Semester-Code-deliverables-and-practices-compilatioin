/*Create a flowchart to compute and display the area and perimeter of a 
rectangle by taking length and width as an input from user.*/
#include <iostream>
using namespace std;
int main() {
int length;
int width;
cout << "Enter length and width: ";
cin >> length;
cout << "lenght inputted: ";
cout << length;
cout << endl << "width inputted: ";
cin >> width;
cout << width;
int area = length * width;
int perimeter = 2 * (length + width);
cout << endl <<"area: "<< area << endl;
cout << "perimeter: " << perimeter << endl;

    return 0;
}