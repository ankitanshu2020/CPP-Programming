#include <iostream>
using namespace std;
void revArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << " " << arr[i] << ", ";
    }
    cout << endl;
}
int main()
{
    int arr1[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int arr2[7] = {5, -2, 1, -19, 27, 71, 16};
    revArray(arr1, 10);
    revArray(arr2, 7);
    printArray(arr1, 10);
    printArray(arr2, 7);

    return 0;
}