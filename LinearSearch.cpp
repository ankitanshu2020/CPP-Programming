#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[10] = {9, -2, 51, 0, 27, 53, 10, 24, 70, 2};
    int key;
    cout << "\nEnter the key that you want to search in array : ";
    cin >> key;
    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "\nKey is present in the array" << endl;
    }
    else
    {
        cout << "\nKey is absent" << endl;
    }
    return 0;
}