#include <iostream> 
using namespace std;

int main(){
    double balance=0, savings=0, amount, amount2, amount3, amount4;
    string sender, receiver;
    int choice, save;


    do{
    cout << "ATM Machine created by leo"<<endl;
    cout << "1 - Balance"<<endl;
    cout << "2 - Deposit"<<endl;
    cout << "3 - Send money"<<endl;
    cout << "4 - Withdraw"<<endl;
    cout << "5 - Savings"<<endl;
    cout << "6 - exit"<<endl;
    cout << "Enter choice: ";
    cin >> choice;

switch(choice){

case 1: system("cls");
cout << "Account Balance: "<< balance<< endl;
break;

case 2: system("cls");
cout << "Enter amount: " << endl;
cin >> amount;
balance = balance + amount;
cout << "You have succefully add " << balance << " on your account."<<endl;
cout << "New Balance: "<< balance << endl;
break;

case 3: system("cls"); 
cout << "Enter name of sender: ";
cin>> sender;
cout << "Enter name of receiver: ";
cin >> receiver;
do{
cout << "Account Balance: " << balance<<  endl;
cout << "Enter Amount: ";
cin >> amount2;
    if(amount2>balance){cout<<"Sorry you do not have enough balance, please retry"<< endl;}
    else{
        balance = balance - amount2;
        cout << "Dear " << receiver << " you have sent " << amount2 << " to " << receiver <<endl;
        cout <<  " New balance: " << balance<< endl;
    }
}while(amount2>balance);


break;
case 4: system("cls"); 
do{
cout << "Account Balance: " << balance<<  endl;    
cout << "Enter amount: ";
cin >> amount3;
 if(amount3>balance){cout<<"Sorry you do not have enough balance, please retry"<< endl;}
    else{
        balance = balance - amount3;
        cout <<"You have withdrawn" << amount3 << "on your account" <<endl;
        cout <<  " New balance: " << balance<< endl;}
}while(amount3>balance);
break;
case 5: system("cls");

do {
cout << "Savings balance: " << savings<<  endl;
cout << "Account Balance: " << balance<<  endl;
cout << "What do you want to do?" << endl;
cout << "1 - Deposit" << endl;
cout << "2 - Withdraw" << endl;
cout << "3 - Back to main menu" << endl;
cout << "Enter choice: ";
cin >> save;

if (save == 1){do{
cout << "Enter amount: ";
cin >> amount4;
if(amount4>balance){cout<<"Sorry you do not have enough balance, please retry"<< endl;}
else{savings = savings + amount4;
balance = balance - amount4;}
}while(amount4>balance);
}
else if (save == 2){
 do{   
cout << "Enter amount: ";
cin >> amount4;
if(amount4>savings){cout<<"Sorry you do not have enough balance, please retry"<< endl;}
else{savings = savings - amount4;
balance = balance + amount4;
cout << amount4 << " is send to your account balance " << endl;}
   }while (amount>savings);
}
else if (save == 3){
continue;
}
}while(save<3);
break;
case 6:
exit(0); 



}
    }while(choice <5);
    return 0;
}