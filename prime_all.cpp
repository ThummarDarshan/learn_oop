#include<iostream>
using namespace std;
int main()
{
    int n,div=2,num=2;
    cout<<"Enter the Number =";
    cin>>n;

    x : if(num>n)
    {
        return 0;
    }
    else
    {
       y: if(div<num)
        {
            if(num%div==0)
            {
                num=num+1;
                goto x;
            }
            else
            {
                div=div+1;
                goto y;
            }
        }
        else
        {
            cout<<num<<"\n";
            num =num+1;
            goto x;
        }
    }cout<<n;
  return 0;
}