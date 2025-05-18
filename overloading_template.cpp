#include <iostream>
using namespace std;

template <class T>

class Darshan
{

public:
    T data;
    Darshan(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Darshan<T>::display()
{
    cout << data;
}

void func(int a)
{
    cout<<"I am 1st func() "<<a<<endl;
}

template <class T>
void func1(T a)
{
    cout<<"I am templatized  1st func() "<<a<<endl;
}

int main()
{

    // Darshan<int> d(5);
    // Darshan<char> dd('c');
    // cout << d.data << endl;

    // //  d.display();
    // dd.display();


    // func(4); // exact match takes the highest priority
    func1('c'); // exact match takes the highest priority

    return 0;
}
