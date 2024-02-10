#include <iostream>
using namespace std;

class studentProf{
    private:
    int gwa;


    public:
    string name;
    int age, section, year;

    studentProf(string sname, int sage, int syear,int ssection){
        name = sname;
        age = sage;
        section = ssection;
        year = syear;

    }

    int gwaret(int a){
        int a = gwa;
        return a;
    }
};
/*constructions is just like a shortcut because it compressed the declared variables
 and you dont have to initiate it one by one every object*/ 

int main(){
    
    studentProf stud1("leo", 18, 1, 1);
    /*  
    studentProf stud1;
        stud1.name = "leo";
        stud1.age = 18;
        stud1.year = 1;
        stud1.section = 1;
    */
    studentProf stud2("Jan", 19, 1, 1);
      /* 
        studentProf stud2;
        stud2.name = "Jan";
        stud2.age = 19;
        stud2.year = 1;
        stud2.section = 1;
    */
    
    cout << stud2.age;

}

