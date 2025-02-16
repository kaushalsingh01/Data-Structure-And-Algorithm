#include <iostream>
using namespace std;
int main()
{
    int arr[100],smallest=INT_MAX, largest=0,arr_size=0;
    cout<<"Enter size of array: ";
    cin>>arr_size;
    cout<<"Enter elements in array:\n";
    for(int i=0; i<arr_size; i++)
    {
        cin>>arr[i];
    }
    cout<<"Finding the smallest and largest element in array: \n";
    for(int i=0; i<arr_size; i++)
    {
        if(largest < arr[i])
        {
             largest = arr[i];
        }
        if(smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    cout<<"Smallest Element: "<<smallest<<endl;
    cout<<"Largest Element: "<<largest<<endl;
    return 0;
}
