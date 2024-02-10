#include <iostream>
using namespace std;

void Welcome(){
    cout << "Hello welcome to this program, what do you want to do?"<< endl;
}
int MeterToFeet(double meter){
    return meter * 3.28084;

}
int main(){
    double meter;
    Welcome();
    cout << "Enter meter: ";
    cin >> meter;
    cout << "Feet=";
    cout << MeterToFeet(meter);

    return 0;
}