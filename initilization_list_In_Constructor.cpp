#include<iostream>
using namespace std;

/*

Syntax for initialization list in constructor
constructor (argument-list) : initilization-section

constructor(argument-list) : initilization-section
{
    assignment + other code ;
}

class Test
{
        int a;
        int b;
        public :
            Test(int i,int j) : a(i),b(j) {constructor body}
};

*/


class Test
{
    int a,b;
    public :
      //Test(int i,int j) : a(i) , b(j)
      //Test(int i,int j) : a(i) , b(i+j)
      //Test(int i,int j) : b(i) , a(j)  // This will be create problem bcz a will initiallized first
        Test(int i,int j) : a(i) , b(a+j)
        {
            cout<<"Comnstructor executed "<<endl;
            cout<<"value of a is "<<a<<endl;
            cout<<"value of b is "<<b<<endl;
        }

};

int main()
{
    Test t(10,20);

    return 0;
}
