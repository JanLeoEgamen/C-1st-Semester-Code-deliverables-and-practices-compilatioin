//Jan Leo Egamen
//Create a flowchart and a c++ program that will input for student name and age then display the inputted name and age

#include <iostream>
using namespace std;

int main(){
    char name[1000];
    int age;
    cout << "Enter name: ";
    cin.getline(name,1000);
    cout << "Enter age:";
    cin >> age;
    
    cout << "Your name is " << name << " and your age is " << age << " year's old";
    
    return 0;
}