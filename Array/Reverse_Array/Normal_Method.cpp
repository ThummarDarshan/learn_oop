#include<iostream>
using namespace std;

int main ( )
{
    int arr[] = {4 ,42, 42, 23,42,45,21};
    int size = 7;
    int i,j;
    //2 ponter approch
    for(i=0, j = size -1 ; i < size/2 ;i++ , j--)
    {
        int temp = arr[i];
        arr[i]= arr[j];
        arr[j] = temp ;
    }

    for(int i=0 ; i< size ; i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
