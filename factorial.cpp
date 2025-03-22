#include<iostream>
using namespace std;

int main()
{
    int n,sum=0,i;
    cout<<"Enter the Number =";
    cin>>n;
   for(int i=1; i< n;i++)
   {
      i= i*(i+1);
   }
   cout<<i;

    return 0;
}
