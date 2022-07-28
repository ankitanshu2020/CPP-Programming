#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "\nEnter the limit : ";
    cin >> n;
    while (row <= n)
    {
        // to print space
        int space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        // to print 1,12,123 like pattern
        int col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }

        // print 1,21,31 like pattern
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }
        cout << endl;
        row++;
    }
    return 0;
}