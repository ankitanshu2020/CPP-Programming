#include <iostream>
using namespace std;

void revAltArr(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i <= size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int printArr(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

int main()
{
    int arr1[6] = {3, 5, 18, 10, 21, 81};
    int arr2[5] = {4, -2, 18, 32, 0};
    revAltArr(arr1, 6);
    revAltArr(arr2, 5);
    printArr(arr1, 6);
    printArr(arr2, 5);
    return 0;
}
