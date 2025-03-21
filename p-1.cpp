
#include <iostream>
using namespace std;
int main()
 {
        int n,div=2;

        cout<<"Entre the number =";
        cin>>n;


       x: if(div<n)
        {
            if( n%div==0)
            {
                cout<<"The Number is Non Prime Number "<<"\n";

            }
            else
            {
                div +=1;
                goto x;
            }
        }

    else
    {
        cout<<"Prime Number";
    }
        return 0;
 }