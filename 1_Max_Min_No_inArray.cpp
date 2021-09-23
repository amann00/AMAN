#include <iostream>
#include <climits>
using namespace std;

void max_min(int size1, int arr[], int max_No, int  min_No)
{
    for (int i = 0; i < size1; i++)
    {
        max_No = max(max_No, arr[i]);
        min_No = min(min_No, arr[i]);
    }
}
int main()
{
    int size1;
    int max_No = INT_MAX;
    int min_No = INT_MIN;
    cout<<"Enter: ";
    cin >> size1;
    int arr[100];
    for (int i = 0; i < size1; i++)
    {
        cin >> arr[i];
    }
    max_min(size1, arr, max_No, min_No);
    
    cout<<max_No<<" "<<min_No;
}