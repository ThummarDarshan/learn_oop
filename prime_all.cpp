#include<iostream>
using namespace std;

int main ( )
{
    int n,c=0;
    cout<<"Enter the number :";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        for(int div=2;div<i;div++)
        {
            if(i%div==0)
            {
                c++;
                break;
            } 
        }
        if(c==0)
        {
            cout<<i<<endl;

        }
        c=0;
    }
    return 0;
}
