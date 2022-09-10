#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[8] = {2, 4, 7, 8, 11, 12, 15, 19};
    int odd[9] = {2, 4, 7, 8, 11, 12, 15, 19, 20};

    int evenIndex = binarySearch(even, 8, 12);
    cout << "Index of 15 is " << evenIndex << endl;
    int oddIndex = binarySearch(odd, 9, 2);
    cout << "Index of 4 is " << oddIndex << endl;
    return 0;
}
