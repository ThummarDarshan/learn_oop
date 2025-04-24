#include<iostream>
using namespace std;

int main ( )
{
    int array[5] ={ 1 ,23,13,44,-54};
    int small = array[0];//keep one value inside the array otherwise write INT_MAX

    for (int i = 0 ; i < 5 ; i++ )
    {
        small = min(array[i],small); // function for the min value
    }
    cout <<"The smallest number is : "<<small <<endl;
    return 0;
}
