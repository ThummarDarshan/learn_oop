#include<iostream>
using namespace std;

class Complex
{
    int real,imaginary;
    public :

        void getData()
        {
            cout<<"The real part is : "<<real<<endl;
            cout<<"The imaginary part is : "<<imaginary<<endl;
        }

        void setData(int a,int b)
        {
            real = a;
            imaginary = b;
        }

};


int main()
{
    //Complex c1;
    //Complex *ptr = &c1;
    Complex *ptr = new Complex;

    //(*ptr).setData(10,20);  is exactly same as
    ptr -> setData(10,59);

    //(*ptr).getData();
    ptr -> getData();

    return 0;
}
