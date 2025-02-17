#include <iostream>
using namespace std;

int missingNumber(int arr[], int size)
{
    int num = 0;
    for (int i = 0; i <= size; i++)
    {
        bool found = false;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == num)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            return num;
        }
        num++;
    }
    return num;
}

int main()
{
    int size, arr[100];
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter elements in array in the range of 0 to " << size - 1 << " :" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int num = missingNumber(arr, size);
    cout << "The smallest missing number is: " << num << endl;
    return 0;
}
