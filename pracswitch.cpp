#include <iostream>
using namespace std;
int main() {
cout << "Welcome to Nakama's cafe, what's your order? (pick from 1-10) " << endl;
cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
int order;
cin >> order;
cout << "Your order is: ";
switch (order) {
case 1:
cout << " Luffy's Meat combo";
break;
case 2:
cout << " Zoro's Booze";
break;
case 3:
cout << " Sanji's Special Tea";
break;
case 4:
cout << " Sogeking's Jumbo Sausage";
break;
case 5:
cout << "Nami's Weather cake";
break;
case 6:
cout << "Chopper's Cotton Candy";
break;
case 7:
cout << "Robin's Special Flower Cake";
break;
case 8:
cout << " Franky's Cyborg Salad";
break;
case 9:
cout << "Brook's Sizzling T-bone";
break;
case 10:
cout << "Jinbe's Tuna Pasta";
break;
}
return 0;
}