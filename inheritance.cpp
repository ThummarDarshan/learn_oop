
#include<iostream>
using namespace std;

//base class

class Employee
{
    public:
    int id;
    float salary;
    public:
        Employee(int inpid)
        {
            id=inpid;
            salary=34.0;
        }
        Employee() {}

};

//Derive class syntax
/*
class {{derived-class-name}} : {{visiblity-mode}} {{base-class-name}}
{
    class members/methods/etc...
};

NOTES :-
1. defualt visiblity mode is private 
2. Public visiblity mode : Public members of base class becomes Public members of derive class
3. Private visiblity mode : Public members of base class becomes Private members of derive class
4. Private members are never inherited
*/


//Creating a programmer class derived from employee base class
class programmer : private Employee
{
    public :
    programmer(int inpid)
    {
        id=inpid;
    }


    int languge=9;

    void getdata()
    {
        cout<<id<<endl;
    }
};

int main()
{
    Employee darshan(127),kalejo(137);
    cout<<darshan.salary<<endl;
    cout<<kalejo.salary<<endl;

    programmer skillf(2);
    cout<<skillf.languge<<endl;
    skillf.getdata();

    return 0;
}
