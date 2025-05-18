
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream out;
    out.open("semple.txt");
    out<<"This is me \n";
    out<<"This is me like \n";
    out<<"hello my name is darshan thummar";
    out.close();

    ifstream in;
    string st;
    in.open("semple.txt");
    //getline(in,st);

    while(in.eof() == 0)
    {
        getline(in,st);
        cout<<st<<endl;
    }

   // cout<<st;
    in.close();

    return 0;
}
