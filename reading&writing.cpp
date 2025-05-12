#include<iostream>
#include<fstream>

/*
The useful classes for working with files in c++ are :
    1. fstreambase
    2.ifstream --> derived from fstreambase
    3.ofstream --> derived from fstreambase



In order work eith files in c++, you will have to open it.
primarily, there are 2 ways to open a file :

    1.Using the constructor
    2.Using the member function open() of the class
*/

using namespace std;

int main()
{

    string st="darshan";
    string st2;
  /*  //Opening file using constructor and writing it

    ofstream out("semple.txt"); // write operation
    out<<st;
  */

    //Opening file using constructor and reading it

    ifstream in("semple_ow.txt"); // read operation
    // in>>st2;
    getline(in,st2);
    cout<<st2;

    return 0;
}
