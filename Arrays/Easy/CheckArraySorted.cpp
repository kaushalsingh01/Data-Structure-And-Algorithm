#include <iostream>
using namespace std;

bool checkSorted(int a[], int size)
{
    if (size < 2)
        return true;

    bool ascending = true, descending = true;

    for (int i = 0; i < size - 1; ++i)
    {
        if (a[i] > a[i + 1])
            ascending = false;
        if (a[i] < a[i + 1])
            descending = false;
    }

    return ascending || descending;
}

int main()
{
    int arr[100], size = 0;
    bool result;
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements of array: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    result = checkSorted(arr, size);
    if (result)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
    return 0;
}
