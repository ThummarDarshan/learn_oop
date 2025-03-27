
#include<iostream>
using namespace std;

int Linear_Search(int arr[ ] , int size , int target )
{
    for (int i=0 ; i < size ;i++)
    {
        if(arr[i]==target)
        {
            return i; // if found the value then return the index of the value
        }
    }
    return -1;//if not found in array then return -1 
}

int main ( )
{
    int arr[] = {4 ,42, 42, 23,42,45,21};
    int target ;
    cout << "Enter target : ";
    cin >> target ;
    int index;

    index = Linear_Search(arr,7,target);
    cout<<"The index is (if -1 then not found) : "<<index<<endl;
    return 0;
}
