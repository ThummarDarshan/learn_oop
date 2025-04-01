#include<iostream>
using namespace std;

int decTobinary(int decNum)
{
    int ans=0,power=1;

        while(decNum>0)
        {
            int rem = decNum%2;

            decNum /= 2;

            ans += (rem * power);
            power *= 10;
        }
      return ans;
}


int main()
{
    int decNum;
    cout<<"Enter the desimal number :- ";
    cin>>decNum;



    cout<<decTobinary(decNum);

}
