#include<iostream>
using namespace std;

template <class T>
void swapp (T &a , T &b)
{
    T temp = a ;
    a = b ;
    b = temp ;
}


template <class T1, class T2>

float funAvg(T1 a,T2 b)
{
    float avg = (a+b)/2.0;

   
    return avg;
}


int main()
{
    float a;
    a=funAvg(5,3);
    cout<<"the avg is ="<<a<<endl;

     int x=7 , y=10;
     swapp(x,y);
     cout<<x<<endl<<y;
    return 0;
}