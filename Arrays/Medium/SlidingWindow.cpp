#include <iostream>
using namespace std;

void slidingWindow(int arr[], int size)
{
    int target;
    cout << "Enter target sum: ";
    cin >> target;

    for (int i = 0; i < size; i++)
    {
        int curr = 0;
        for (int j = i; j < size; j++)
        {
            curr += arr[j];
            if (curr == target)
            {
                cout << "Subarray found from index " << i << " to " << j << endl;
                return;
            }
        }
    }

    cout << "No subarray with the target sum found." << endl;
}

int main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];

    cout << "Enter elements in array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    slidingWindow(arr, size);

    return 0;
}
