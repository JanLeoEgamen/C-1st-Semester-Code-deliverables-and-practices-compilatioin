#include <iostream> 
using namespace std;

int main(){
    int N, sum=0;
cout << "Enter number: ";
cin >> N;

for(int num =1; num <=N; num++){
    if(num%2==0){
        sum = sum + num;
    }
}
cout << "Sum of all even numbers: " << sum;
    return 0;
}