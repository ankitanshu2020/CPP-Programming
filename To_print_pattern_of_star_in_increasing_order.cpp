#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "\nEnter the value to print increasing order of star : ";
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << " * ";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}