
#include<iostream>
using namespace std;
/*
case 1:
    class B : public A
    {
        order of execution of constructor -> first A() then B()
    };

case 2 :
    class A : public B,public C
    {
        order of execution of constructor -> B() then C() and A()
    };

case 3 :
    class A : public B, virtual public C
    {
       order of execution of constructor -> C() then B() and A()
    };
*/

class Base1
{
    int data1;
public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor is called" << endl;
    }

    void printDataBase1(void)
    {
        cout << "The value of data1 is : " << data1 << endl;
    }
};

class Base2 {
    int data2;
public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor is called" << endl;
    }

    void printDataBase2(void)
    {
        cout << "The value of data2 is : " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int Derived1, Derived2;
public:
    Derived(int a, int b, int c, int d) : Base1(c), Base2(b)
    {
        Derived1 = a;
        Derived2 = d;
        cout << "Derived class constructor is called" << endl;
    }

    void printDataDerived(void)
    {
        cout << "The value of derived1 is : " << Derived1 << endl;
        cout << "The value of derived2 is : " << Derived2 << endl;
    }
};

int main()
{
    Derived aa(1, 2, 3, 4);
    aa.printDataBase1();  // Corrected method name
    aa.printDataBase2();
    aa.printDataDerived();

    return 0;
}

