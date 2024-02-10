#include <iostream>
using namespace std;



class Cap
{

    protected:
    string name;
private: 
int price;

public:
string size;
string color;

void setprice(int p){
 price = p;
}

int getprice(){
    return price;
}

};

class model : public Cap
{
public:

    int age;
    string m = name;

private:



};

int main(){


Cap one;


one.setprice(200);

one.color="green";
cout << one.color;
cout << one.getprice();

cout << endl; 

model c;

c.m = "nono";

cout << c.m;
}