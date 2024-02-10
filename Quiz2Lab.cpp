#include <iostream>
using namespace std;
     
    void swap(){
    cout << "Swapping of values for two variables"<< endl;
        float a, b, temp;
        cout << "------------------------------------"<< endl;
        
    }
    // no return value and have argument
    void swap2(int a, int b){
        int temp;
        temp = a;
        a = b;
        b =temp;

        cout << "Result" << endl;
        cout << "A = " << a << endl;
        cout << "B = " << b <<  endl<<endl;


    }
    // no return value and no argument
    void Celsius(){
        float cel, fah;
        cout << "Converting Celsius to Fahrenheit"<< endl;
        cout << "------------------------------------"<< endl;
        cout << "Enter Celsius: ";
        cin >> cel;


        fah = 9/ (5* cel + 32);
    }
    //  return value and no argument
    double Celsius2(){
        float cel, fah;


        fah = 9/ (5* cel + 32);

        return fah;
    }
    // return a value and have argument
    double Celsius3(double cel)
    {
        double fah;
        fah = 9 / (5* cel + 32);
    return fah;
    }
int main(){
    int choice;
    

    do{
    cout << "Main Menu"<<endl;
    cout << "1 - Swapping of values for two variables"<<endl;
    cout << "2 - Converting Celsius to Fahrenheit"<<endl;
    cout << "3. Exit"<<endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice){

        case 1: system("cls");
        swap();
        int x, y;
        cout << "Input the value of first and last variable: ";
        cin >> x >> y;
        swap2(x,y);
        break;


        case 2: system("cls");
      /* return a value and no argument
        Celsius();
        cout <<"The equivalent in fahrenheit is " << Celsius2()<< endl;*/
        int z;
        cout << "Enter Celcius: ";
        cin >> z;
        cout <<"The equivalent in fahrenheit is " << Celsius3(z)<< endl;        
        break;

        case 3: system("cls");
        exit (0);
        break;

    }
    }while(choice<3);

    return 0;
}