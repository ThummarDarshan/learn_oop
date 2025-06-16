

#include<iostream>
using namespace std;


int FINDArr(int arr[],int num,int size)

{

int x=0,i;
        for(int i=0 ;i<size;i++)
        {
            if(arr[i]==num)
            {
                  x++;
            }

        }

    if(x==1)
    {
        cout<<"Find";

    }
    else
    {
        cout<<"Not find";
    }


}

int main()
{
    int a[]={10,9,3,5,8,1,12};
    int finda;


    cout<<"Enter the number you want to find :-";
    cin>>finda;

    FINDArr(a,finda,7);


}

