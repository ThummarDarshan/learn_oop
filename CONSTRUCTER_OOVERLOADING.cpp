#include<iostream>
using namespace std;

class complex
{
    int a,b;

    public :

        complex( )
        {
            a=0;
            b=0;
        }

        complex(int x,int y)
        {
            a=x;
            b=y;
        }

        complex(int x)
        {
            a=x;
            b=0;
        }

        void printNumber()
        {
            cout<<"Your Number Is "<< a << " + " << b << " i "<<endl;
        }
};

int main()
{
    complex p(4,6);
    p.printNumber();

    complex p1(5);
    p1.printNumber();

    complex p2;
    p2.printNumber();

    return 0;
}
