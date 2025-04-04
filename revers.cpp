#include<iostream>
using namespace std;

int FINDArr(int arr[],int size)

{
    int start=0, enda = size-1;

    while(start<enda)
    {
        swap(arr[start],arr[enda]);
        start++;
        enda--;

    }




}

int main()
{
    int a[]={10,9,3,5,8,1,12};
    int finda;


       FINDArr(a,7);

    for(int i=0;i<7 ;i++)
        {
            cout<<a[i]<<endl;
        }
}

