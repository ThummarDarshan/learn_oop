

#include <iostream>
#include <map>
#include <string>
using namespace std;

// Map is an associative array

int main()
{
    map<string, int> marks;  // Correct variable name
    marks["ram"] = 99;
    marks["shyam"] = 88;
    marks["hari"] = 77;

    marks.insert( { {"darshan",86} , {"kalejo",97} } );

    map<string, int>::iterator itr;
    for (itr = marks.begin(); itr != marks.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl;
    }

    cout<<"the size is : "<<marks.size()<<endl;
    cout<<"the max size is : "<<marks.max_size()<<endl;
    cout<<"the size is : "<<marks.empty()<<endl;

    return 0;
}
