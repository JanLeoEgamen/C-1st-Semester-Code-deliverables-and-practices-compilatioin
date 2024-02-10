#include <iostream> 
using namespace std;

int main()
{
int num, n=0, n1=1, sum =0;

cout << "Enter a number: ";
cin >> num;
cout << "Fibonacci Series: ";

while (num != 0)
{
    sum = n + n1;
    cout << sum << " ";
    n1 = sum;
    n = n1;
    num = num - 1;
}


    return 0;
}

/*

#include <iostream> 
using namespace std;

int main()
{
int f1=0, f2=1, f3, Nnn, in;

cout << "Enter a number: ";
cin >> Nnn;
cout << "Fibonacci Series: ";

for( in = 0; in < Nnn; ++in){
    f3 = f1+f2;
    cout << f3 <<" ";
    f1= f2;
    f2=f3;
}



    return 0;
}
*/
