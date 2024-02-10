#include <iostream>
using namespace std;

   class Pogi{
    public:
    string nameofpogi;
    int ageofpogi;

   };


int main(){

Pogi leo;
leo.nameofpogi ="Jl";
leo.ageofpogi = 19;


Pogi Jlparen;
Jlparen.nameofpogi = "poginiJl";
Jlparen.ageofpogi = 19;

cout << "ikaw si " << leo.nameofpogi << " at ikaw ay "<< leo.ageofpogi << endl;
    return 0;
}