//Jan Leo Egamen
/*Revise problem # 9 Commission of the Salesman. If total sales<=10,000 then commission is 10% of the total sales, 
else if total sales <=15,000 then 15%,else if total sales<=20000, then 20% otherwise commission is 30%.*/
#include <iostream>
using namespace std;
//this is my code in sequence number 9, it is already existing so now the thing that I need to do is to revise it.
int main(){
    float usold, uprice, totalSales, commision;

    cout << "Enter unit sold: ";
    cin >> usold;
    cout << "Enter unit price: ";
    cin >> uprice;
    totalSales = usold * uprice;

    cout << "Total sales: "<< totalSales << endl;

    if (totalSales<=10000){
        commision = totalSales * 0.10;
        cout << "Commission: " << commision;
    }
    else if (totalSales<=15000){
        commision = totalSales * 0.15;
        cout << "Commission: " << commision;        
    }
    else if(totalSales<=20000){
        commision = totalSales * 0.20;
        cout << "Commission: " << commision;
    }
    else{
        commision = totalSales * 0.30;
        cout << "Commission: " << commision;
    }

    return 0;
}