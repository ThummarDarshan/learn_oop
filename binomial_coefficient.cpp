#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact =fact*i;

    }

    return fact;

}

int nCr(int n,int r)
{

    int fact_n=factorial(n);
    int facr_r=factorial(r);
    int fact_nmr=factorial(n-r);
    return fact_n/(facr_r * fact_nmr);
  //  cout<<"Ans :- "<<ans;
}

int main()
{
    int n,r;

    cout<<"Enter the n :-";
    cin>>n;
    cout<<"\nEnter the r :-";
    cin>>r;

    cout<<nCr(n,r);

}
