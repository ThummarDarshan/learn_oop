#include<iostream>
#include<string.h>
using namespace std;

class binary
{

    string s;


public :
    void read(void);
    void check_binary(void);
    void ones(void);
    void display(void);
};

void binary :: read(void)
{
    cout<<"Enter the binary number :- "<<endl;
    cin>>s;
}

void binary :: check_binary(void)
{
    for(int i=0 ; i<s.length() ; i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1')
        {
            cout<<"Incrroct Number"<<endl;
            exit(0) ;
        }
    }
}

void binary :: ones(void)
{
    for(int i=0 ; i<s.length() ; i++)
    {
        if(s.at(i) == '0' )
        {
           s.at(i)= '1';
        }
        else  if(s.at(i) == '1' )
        {
           s.at(i) = '0';
        }
    }
}

void binary :: display(void)
{
    cout<<"Display the binary number :- "<<endl;
    for(int i=0 ; i<s.length() ; i++)
    {
        cout<<s.at(i);
    }
        cout<<endl;
}

int main()
{
    binary b;

    b.read();
    b.check_binary();
        b.display();
    b.ones();
    b.display();

    return 0;

}
