#include<iostream>
using namespace std;

/*

CLASS TEMPLATES WITH MULTIPLE PRAMATERS (ONE, TWO AND MORE THEN TWO)
    template<class T1,class T2> (COMA SEPARATED)
    class nameofclass
    {
        // body
    };

*/

template<class T1,class T2>

class MyClass
{

    public :
        T1 data1;
        T2 data2;

        MyClass(T1 a,T2 b)
        {
            data1= a;
            data2= b;
        }
        void display()
        {
            cout<<this->data1<<endl<<this->data2;
        }
};

int main()
{

    MyClass<int, char> obj (1, 'd');
    obj.display();

    return 0;
}
