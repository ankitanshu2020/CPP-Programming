#include <iostream>
using namespace std;

int printArray(int arr[], int size)
{
    cout << "\nPrinting Array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Printing done" << endl;
    return 0;
}
int main()
{
    int first[10] = {1, 2, 3, 4};
    printArray(first, 10);

    int second[15] = {0};
    printArray(second, 15);

    int third[18] = {1};
    printArray(third, 18);

    int sizeOfthird = sizeof(third) / sizeof(int);
    cout << "\nSize of third array is : " << sizeOfthird;

    return 0;
}