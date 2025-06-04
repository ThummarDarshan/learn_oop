
#include<iostream>
using namespace std;

int main ( )
{
    int array[5] ={ 1 ,23,13,44,-54};
    int large = array[0];//keep one value inside the array otherwise write INT_MIN

    for (int i = 0 ; i < 5 ; i++ )
    {
        if(array[i]>large)
            large=array[i];
    }
    cout <<"The largest number is : "<<large <<endl;
    return 0;
}
