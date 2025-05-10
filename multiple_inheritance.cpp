#include<iostream>
using namespace std;



/*
syntex for inheriting in  multiple inheritance
    class Derived : visiblity-mode base1 , visiblity-mode base2
    {
        class body of class "DerivedC"
    };

*/


class Base1
{

    protected :
        int base1int;

    public :
        void set_base1int(int a)
        {
            base1int=a;
        }
};

class Base2
{

    protected :
        int base2int;
    public :
        void set_base2int(int b)
        {
            base2int=b;
        }
};

class Derived : public Base1, public Base2
{
    public :
        void show()
        {
            cout<<"The value of base1 is  "<<base1int<<endl;
            cout<<"The value of base2 is  "<<base2int<<endl;
            cout<<"The sum of these value is  "<<base1int+base2int<<endl;
        }
};


/*

the inheriteed derived class will look something like this :
Data members :-
    base1int --> protected
    base2int --> protected

Member function :-
    set_base1int() --> public
    set_base2int() --> public
    show() --> public

*/

int main()
{
    Derived abc;

    abc.set_base1int(10);
    abc.set_base2int(20);
    abc.show();
    return 0;
}
