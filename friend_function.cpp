
#include<iostream>
using namespace std;

class complex
{

    int a,b;
public :
    void setnumber(int n1, int n2)
    {
        a=n1;
        b=n2;

    }
    friend complex sumcomplex(complex o1,complex o2);
    void printnumber()
    {
        cout<<"Your Number "<<a<<" + "<<b<<"i"<<endl;

    }
};

complex sumcomplex(complex o1 , complex o2)
{
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main()
{
    complex c1,c2,sum;
    c1.setnumber(4,5);
    c2.setnumber(11,8);

    c1.printnumber();
    c2.printnumber();

    sum= sumcomplex(c1,c2);

    sum.printnumber();

    return 0;
}

/*

properties of friend function
1. not in the scope of class.
2. since it is not in the  scope of the class ,
   it cannot be called  from the object of the class . c1.sumcomplex() == invalid .
3. can be invoked without the help of any object.
4. Usually contans the arguments as object.
5. can be declard inside the public or private  section of the class.
6. It cnanot access the member direcltly by their name and need object_name.member_name
   to access any member.

*/
