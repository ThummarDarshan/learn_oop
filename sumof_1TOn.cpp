#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;
    cout<<"Enter the Number =";
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum +=i;

    }

    cout<<"Total Sum of 1 To N is : "<<sum;

    return 0;
}
