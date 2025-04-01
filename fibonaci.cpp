#include <iostream>
using namespace std;

int digit_sum(int n)
{
    int sum=0;
    int num=n;
    do
    {
        int r=num%10;
        num=num/10;
        sum += r;

    } while (num>0);


cout<<"sum of single digit = "<<sum;
}

int main()
{
    int n,sum;

   cout<<"enter the number";
   cin>>n;
   digit_sum(n);

}
