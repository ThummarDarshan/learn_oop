#include<iostream>
using namespace std;

class Complex
{
    int a,b;

    public :

   // Complex(void);

   Complex(int , int);
     void printNumber()
     {
         cout<< "Your number  is "<< a <<"+"<< b <<"i"<<endl;
     }
};

/*
Complex :: Complex(void)  // defualt constructor
{
    a=10;
    b=0;
}
*/

Complex :: Complex(int x,int y)  //this is a peramerised constructor as it takes  2 parameters
{
        a=x;
        b=y;
}


int main()
{

    //implicit call
    Complex a(4,7);
    a.printNumber();

    //explicit call
    Complex b=Complex(5,77);


    b.printNumber();

    return 0;
}
