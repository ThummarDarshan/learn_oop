#include<iostream>
using namespace std;

int changeArr(int arr[],int size)

{
        cout<<"In Function "<<endl;

        for(int i=0 ;i<size;i++)
        {
            arr[i]=2*arr[i];
        }

}

int main()
{
    int a[]={1,2,3};

    changeArr(a,3);
    cout<<"In main "<<endl;



    for(int  i=0 ; i<3 ; i++)
    {
        cout<<a[i]<<" ";
    }
}
