//Jan Leo Egamen
/*Proogram that will input for prelim,midterm and finals then compute for
 the  average Grade then  identify whether passed or failed.*/
#include <iostream>
using namespace std;

int main(){
    int prelim, midterm, finals, average;

    cout << "Input prelim: ";
    cin >> prelim;
    cout << "Input midterm: ";
    cin >> midterm;
    cout << "Input finals: ";
    cin >> finals;

    average = (prelim+midterm+finals)/3;
    
    if (average<75){
        cout << "Failed";
    }
    else {
        cout << "Passed";
    }
    return 0;
}