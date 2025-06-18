#include<iostream>
using namespace std;
//destructor never takes arguments nor does ot return any values

int count=0;

class num
{
    public :
        num()
        {
            count++;
            cout<<"This is the  time when constructor is called for the object number "<<count<<endl;
        }

        ~num()
        {
            cout<<"This is the time when my destructor is called for the object number "<<count<<endl;
            count--;
        }
};

int main()
{
    cout<<"We are inside the main function"<<endl;
    cout<<"Creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering this bolck"<<endl;
        cout<<"Creating the two more object"<<endl;
        num n2,n3;
        cout<<"Exting this bolck"<<endl;
    }
    cout<<"back to main"<<endl;

    return 0;
}
