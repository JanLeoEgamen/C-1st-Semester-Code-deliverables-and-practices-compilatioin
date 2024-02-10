#include <iostream>
using namespace std;

int main()
{
    double kg, m, bmi;
    cout << "Welcome to the BMI calculator"<< endl;

    cout << "Please Enter your Weight(kg): ";
    cin >> kg;
    cout << "Please Enter your height(m) : ";
    cin >> m;

    bmi = kg/ (m*m);

    cout << "Your Body Mass index is: " << bmi <<endl;

    cout << "Interpretaion: ";
    if (bmi<18.58){
        cout << "You are classified as UNDERWEIGHT and disease risk is INCREASED";
    }

    else if (bmi>=18.5 && bmi<=21.99){
    cout << "You are classified as ACCEPTIBLE and disease risk is LOW";
    }

    else if (bmi>=22.0 && bmi<=24.99){
    cout << "You are classified as ACCEPTIBLE and disease risk is VERY LOW";    
    }

    else if (bmi>=25.0 && bmi<=29.99){
    cout << "You are classified as OVERWEIGHT and disease risk is INCREASED";    
    }

    else if (bmi>=30.0 && bmi<=34.99){
    cout << "You are classified as OBESITY 1 and disease risk is HIGH";    
    }
    
    else if (bmi>=35.0 && bmi<=39.99){
    cout << "You are classified as OBESITY 2 and disease risk is  VERY HIGH";    
    }

else if (bmi>40){
    cout << "You are classified as OVERWEIGHT and disease risk is INCREASED";    
    }
    return 0;
}