#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //connecting our file with hout stream

    ofstream hout("semple.txt");

    //Creating a name string and filling it with the string entered by the user

    cout<<"Enter your name  ";
    string name;
    cin>>name;

    //Writing a string to the file

    hout<<"My name is " + name;
    //getline(hout,name);

    hout.close();

    ifstream hin("semple.txt");
    string content;
    //hin>>content;
    getline(hin,content);
    cout<<"The content of this file is : "<<content;

    hin.close;

    return 0;
}
