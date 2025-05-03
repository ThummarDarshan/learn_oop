#include<iostream>
using namespace std;

class Complex
{
    int a,b;
    public :
        // creating constructer
        // constructer is a special member function with the same name as of  the class.
        //It is AUTO MATIC invoked
        //it is used to initializ the object of its  class
    complex(void);  //constructer declarstion
    void printNumber()
     {
         cout<< "Your number  is "<< a <<"+"<< b <<"i"<<endl;
     }
};

Complex ::complex(void)
{
    a=10;
    b=10;

}

int main()
{
    Complex c;
    c.printNumber();

    return 0;
}
