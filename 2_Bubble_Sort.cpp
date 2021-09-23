#include <iostream>
using namespace std;

int bubbleSort(int n, int arr[])
{
    int counter = 1;
    while (counter < n - 1)
    {
        for (int i = 0; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i <n; i++){
        cout<<arr[i]<<" ";
    }
    return true;
}

int main()
{
    int n;  //size
    cout<<"Enter Size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter Array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    cout<<bubbleSort(n, arr)<<endl;
    return 0;
}