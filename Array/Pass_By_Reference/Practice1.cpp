#include<iostream>
using namespace std;

void change(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        arr[i]=arr[i] * 2 ;
    }
}

int main ( )
{
    int array[5] ={ 1 ,23,13,44,-54};

    change(array , 5 );
    
    for (int i = 0 ; i < 5 ; i++ )
    {
        cout << array[i] << " "<<endl;
    }
    
    return 0;
}
