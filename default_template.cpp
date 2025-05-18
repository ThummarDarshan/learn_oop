#include<iostream>
using namespace std;

template <class T1=int ,class T2=float , class T3=char>


class Darshan
{
    public  :
        T1 a;
        T2 b;
        T3 c;
        Darshan(T1 x, T2 y,T3 z)
        {
            a=x;
            b=y;
            c=z;
        }

        void display()
        {
            cout<<"The value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
        }
};

int main()
{

    Darshan<> d(4, 6.4,'f');
    d.display();
    cout<<endl;

    Darshan<> dd(1.4,'d','c');
    dd.display();
    return 0;
}