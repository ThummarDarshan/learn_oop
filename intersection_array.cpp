#include <iostream>
using namespace std;

// Function to check if value is already in the array
int isAlreadyIn(int arr[], int size, int value)
{
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == value)
            return 1;
    }

}

int main() {
    int size1, size2;



    cout << "Enter size of first array: ";
    cin >> size1;

 int arr1[size1];

    cout << "Enter elements of first array:\n";

    for (int i = 0; i < size1; ++i)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> size2;


  int arr2[size2];
    cout << "Enter elements of second array:\n";

    for (int i = 0; i < size2; ++i)
    {
        cin >> arr2[i];
    }

    int intersection[100];
    int k = 0;


    for (int i = 0; i < size1; ++i)
    {
        for (int j = 0; j < size2; ++j)
        {
            if (arr1[i] == arr2[j])
            {
                if (!isAlreadyIn(intersection, k, arr1[i]))
                {
                    intersection[k++] = arr1[i];
                }
            }
        }
    }


    if (k == 0)
    {

        cout << "No intersection found.\n";

    }

    else

    {
        cout << "Intersection of arrays: ";

        for (int i = 0; i < k; ++i)
        {
            cout << intersection[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
