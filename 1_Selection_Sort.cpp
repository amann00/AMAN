#include<iostream>
using namespace std;

int selectionSort(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
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

    cout<<selectionSort(arr, n)<<endl;
    return 0;
}