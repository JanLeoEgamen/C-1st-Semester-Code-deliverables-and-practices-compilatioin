//Create a flowchart to compute and display the square and cube of a number entered by user.
#include <iostream>
using namespace std;

int main() {
int num;
cout << "input a number" << endl;
cin >> num;

int square = num * num;
int cube = num * num * num;

cout << "square: " << square << endl;
cout << "cube: " << cube << endl;
return 0;
}