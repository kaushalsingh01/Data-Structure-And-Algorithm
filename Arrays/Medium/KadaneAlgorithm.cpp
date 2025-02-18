#include <iostream>
using namespace std;

int kadaneAlgo(int arr[], int size)
{
    int max_sum = arr[0];
    int curr_sum = arr[0];
    for (int i = 0; i < size; i++)
    {
        curr_sum = max(arr[i], curr_sum + arr[i]);
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}
int main()
{
    int arr[100], size;
    cout << "Enter size of array: ";
    cin >> size;
    cout<<"Enter elements in array: \n";
    for(int i=0; i<size;i++)
    {
        cin >> arr[i];
    }
    int max_sum = 0;
    max_sum =  kadaneAlgo(arr, size);
    cout<<"The maximum sum of a sub array is: "<<max_sum;
    return 0;
}