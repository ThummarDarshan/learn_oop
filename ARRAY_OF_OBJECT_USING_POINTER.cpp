
#include<iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;
    public :
        void setData(int a,float b)
        {
            id=a;
            price=b;
        }

        void getData(void)
        {
            cout<<"Id of item is : "<<id<<endl;
            cout<<"Price of item is : "<<price<<endl;
        }

};


int main()
{
    int size=3,p,q;
    ShopItem *ptr = new ShopItem[size];  // here making the array
    ShopItem *ptrTemp = ptr;


    for(int i=0 ; i<size ; i++)
    {
        cout<<"Id and price of item  " << i+1<<endl;
        cin>>p>>q;
        ptr -> setData(p,q);
        ptr++;

    }

    for(int i=0 ; i<size ; i++)
    {
        cout<<"Item number : "<<i+1<<endl;
        ptrTemp -> getData();
        ptrTemp++;
    }



    return 0;
}
