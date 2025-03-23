#include<iostream>
using namespace std;

int main()
{
        char ch;
        cout<<"Enter the character :- ";
        cin>>ch;

        if(ch>'a' && ch<'z')
        {
            cout<<"\n"<<"lowercase\n" ;
        }
        else
        {
            cout<<"uppercase\n";
        }
}
