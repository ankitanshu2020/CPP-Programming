// Pivot element is the only element in input array which is smaller than it's previous element. A pivot element divided a sorted rotated array into two monotonically increasing array.
#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    int arr[5] = {3, 8, 10, 17, 1};
    cout << "Pivot is " << getPivot(arr, 5) << endl;
}