#include <iostream>
using namespace std;
void unionArray(int arr1[], int size1, int arr2[], int size2)
{
    int arr[200], size = 0;
    for (int i = 0; i < size1; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate)
        {
            arr[size++] = arr1[i];
        }
    }
    cout << "Union of both the array is: [ ";
    for (int i = 0; i < size; i++)
    {
        if (i == size-1)
        {
            cout << arr[i]<<" ]";
        }
        else
        {
            cout <<arr[i] << ", ";
        }
    }
}
int main()
{
    int a[] = {1, 1, 2, 2, 2, 4}, b[] = {2, 2, 4, 4};
    int size1 = 6;
    int size2 = 4;
    unionArray(a, size1, b, size2);
    return 0;
}