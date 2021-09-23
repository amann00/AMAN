#include <iostream>
using namespace std;

int linearSearch(int size, int arr[], int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter Key: ";
    cin >> key;

    cout<<linearSearch(size, arr, key)<<endl;
    return 0;
}

//Time Complexity - Avg = O(n)