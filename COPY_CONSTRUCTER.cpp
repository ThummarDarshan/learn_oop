#include<iostream>
using namespace std;

class Number
{
    int a;

    public :

        Number()
        {
            a=0;
        }

        Number(int num)
        {
            a = num;
        }

        //when no copy constructor is found , compile supllies

        Number (Number &obj)
        {
            cout<<"The copy constructor called !!!"<<endl;

            a = obj.a;
        }
    void display()
    {
        cout<<"The Number for this object is "<<a<<endl;
    }
};

int main()
{
    Number x,y,z(59),z2;

    x.display();
    y.display();
    z.display();

    Number z1(z);  // copy constructer invoked
    z1.display();

        z2=z;// cpoy constructor not called
        z2.display();

    Number z3=y; // copy constructer invoked
    z3.display();

    return 0;
}
