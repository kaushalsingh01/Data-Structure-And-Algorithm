#include <iostream>
using namespace std;
void intersectionArray(int arr1[], int size1, int arr2[], int size2)
{
    int arr[200], size = 0;
    for(int i=0; i<size1; i++)
    {
        if(i>0 && arr1[i-1] == arr1[i])
        {
            continue;
        }
        for(int j=0; j<size2; j++)  
        {
            if(arr1[i] == arr2[j])
            {
                arr[size++] = arr1[i];
                break;
            }
        }
    }
    cout << "Intersection of both the array is: [ ";
    for (int i = 0; i < size; i++)
    {
        if (i == size - 1)
        {
            cout << arr[i] << " ]";
        }
        else
        {
            cout << arr[i] << ", ";
        }
    }
}
int main()
{
    int a[] = {1, 1, 2, 2, 2, 4}, b[] = {2, 2, 4, 4};
    int size1 = 6;
    int size2 = 4;
    intersectionArray(a, size1, b, size2);
    return 0;
}