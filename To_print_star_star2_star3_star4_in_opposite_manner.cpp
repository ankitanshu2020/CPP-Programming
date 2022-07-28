#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "\nEnter the limit : ";
    cin >> n;
    while (row <= n)
    {
        // Print space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        // Print star
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}