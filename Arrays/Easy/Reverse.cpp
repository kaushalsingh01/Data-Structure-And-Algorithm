#include <iostream>
using  namespace std;
int main()
{
    int arr[100], size;
    cout<<"Enter size of array: \n";
    cin>>size;
    cout<<"Enter elements in array: \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Reversed Arrray: \n";
    for(int i=size-1;i>=0;i--)
    {
        if(i == 0)
        {
            cout<<arr[i]<<" ";
        }
        else
        {
            cout<<arr[i]<<", ";
        }
    }
    return 0;
}