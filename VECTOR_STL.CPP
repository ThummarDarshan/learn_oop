#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> vec1;
    int element,size;

    cout<<"Enter the size of the vector : ";
    cin>>size;

   
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector: ";
        cin >> element;
        vec1.push_back(element); // for the enter the element
    }
    // vec1.pop_back(); // for the remove last element

    // cout << "The elements in the vector are: ";
    display(vec1);

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter + 1, 143);

    display(vec1);

    return 0;
}
