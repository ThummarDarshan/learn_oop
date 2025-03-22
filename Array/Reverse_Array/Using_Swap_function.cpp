#include<iostream>
using namespace std;

int main ( )
{
    int arr[] = {4 ,42, 42, 23,42,45};
    int size = 6;
    int i,j;
    //2 ponter approch
    for(i=0, j = size -1 ; i < j ;i++ , j--)
    {
        swap(arr[i],arr[j]);
    }

    for(int i=0 ; i< size ; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
