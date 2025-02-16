#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, temp[100], counter = 0;
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements in array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        temp[i] = 0;
    }

    for (int i = 0; i < size; i++)
    {
        if (arr[i] != 0)
        {
            temp[counter] = arr[i];
            counter++;
        }
    }

    cout << "Filtered array: ";
    for (int i = 0; i < size; i++)
    {
        if (i == size- 1)
        {
            cout << temp[i] << " ";
        }
        else
        {
            cout << temp[i] << ", ";
        }
    }
    return 0;
}
