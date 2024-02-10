#include <iostream> 
using namespace std;

int main(){
    int N, n, M, square, sumOfSquare=0;
cout << "Enter first number: ";
cin >> N;
cout << "Enter second number: ";
cin >> M;
n = N;
while (N<=M){
    if (N%2==0){
        square = N*N;
        sumOfSquare =  sumOfSquare + square;
    }
    N++; // or N = N+1
}
cout << "The sum of square of all even number from "<< n << " to " << M << " is: " << sumOfSquare;

return 0;
}