#include<iostream>
using namespace std;


int main()
{
    int a[5],min=a[0];

    for(int i=0 ; i<5 ; i++)
    {
        cin>>a[i];

    }

    for(int i=0 ; i<5 ; i++)
    {
        if(a[i+1]>a[i])
        {
            min=a[i];
        }

    }

    cout<<"Min Number :- "<<min;

    return 0;
}
