#include<iostream>
using namespace std;

class Baseclass
{
public:
    int var_base;
    void display()
    {
        cout<<"displaying Base class variable var_base "<<var_base<<endl;
    }
};

class Derived : public Baseclass
{

public:
    int var_derived;
    void display()
    {
        cout<<"displaying Base class variable var_base "<<var_base<<endl;
        cout<<"displaying Base class variable var_derived "<<var_derived<<endl;
    }
};


int main()
{
    Baseclass *base_class_pointer;
    Baseclass obj_base;
    Derived obj_derived;
    base_class_pointer = &obj_derived;  // pointing base class pointer to derived class

    base_class_pointer->var_base = 34;
   // base_class_pointer->var_derived = 1034;  // will throw an error
    base_class_pointer->display();

    Derived *Derived_class_pointer;
    Derived_class_pointer = &obj_derived;

    Derived_class_pointer->var_derived = 1034;
    Derived_class_pointer->display();

    return 0;
}
