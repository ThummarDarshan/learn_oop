#include<iostream>
using namespace std;

int main ( )
{
    int array[5] ={ 1 ,23,13,44,-54};//array
    int small = INT_MAX;//INT_MAX is the max value 

    for (int i = 0 ; i < 5 ; i++ )
    {
        if(array[i]<small)
            small = array[i];
    }
    cout <<"The smallest number is : "<<small <<endl;
    return 0;
}
