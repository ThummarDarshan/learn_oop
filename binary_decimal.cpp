#include<iostream>
using namespace std;

int binaryTodecimal(int binaryNum)
{
    int ans=0,power=1;

        while(binaryNum>0)
        {
            int rem = binaryNum%10;

            ans += (rem * power);

            binaryNum /= 10;


            power *= 2;
        }
      return ans;
}


int main()
{
    int binaryNum;
    cout<<"Enter the desimal number :- ";
    cin>>binaryNum;



    cout<<binaryTodecimal(binaryNum);

}
