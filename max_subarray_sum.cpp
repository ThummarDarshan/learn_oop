#include<iostream>

using namespace std;

int main()
{
    int n=6;
    cout<<"Enter the index of array :-";
    cin>>n;

    int a[6]={1,2,3,4,5,6};

    int maxSum =INT_MIN;


   /* cout<<"Enter the array "<<endl;
    for(int i=0 ; i<n ; i++)
    {
        cin>>a[i];
    }
*/

    for(int st=0 ; st<n ; st++)
    {
        int currSum=0;
        for(int end=st ; end<n ; end++)
        {
            currSum +=a[end];
            maxSum = max(currSum,maxSum);
        }
    }

    cout<<"Max Subarray sum = "<<maxSum<<endl;

    return 0;
}

