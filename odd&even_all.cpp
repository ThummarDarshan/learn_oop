
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number =";
    cin>>n;

          cout<<"Even Numbers are :-"<<endl;
    for(int i=1;i<=n ;i++)
      {
          if(i%2==0)
          {
              cout<<i<<endl;
          }
      }

    return 0;
}
