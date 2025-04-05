#include<iostream>
#include<vector>
using namespace std;


int main()
{

    vector<int> vec ;

    cout<<"size = "<<vec.size()<<endl;

    vec.push_back(10);  //push_back for add  value
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    cout<<"After the push size = "<<vec.size()<<endl;

   // vec.pop_back();  // delet last value

 /*  for(int val : vec)
    {
       cout<<val<<endl;
    }*/


    cout<<vec.front()<<endl; //vec.front() for the print 1st value

    cout<<vec.back()<<endl; // vec.back() for the print last value

    cout<<vec.at(2)<<endl; // vec.at(index value which is you want to print)


   // cout<<vec[1];


    return 0;
}

