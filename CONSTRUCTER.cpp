
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
    Complex(void);  //constructer declarstion
    void printNumber()
     {
         cout<< "Your number  is "<< a <<"+"<< b <<"i"<<endl;
     }
};

Complex ::Complex(void) //this is a defult constructer as it takes no parameters
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


/* properties for constructor

1.it should be declared in the public section of the class
2.they are automatically invoked whenever the object is created
3.they cannot return values and do not have any return types
4.it can have defult  arguments
5.we cannot refer to their adress
6.

*/
