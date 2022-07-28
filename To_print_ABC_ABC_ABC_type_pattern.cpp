#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "\nEnter the limit : ";
    cin >> n;
    while (row <= n)
    {
        int col = 1;
        char ch = 'A';
        while (col <= n)
        {
            cout << ch << " ";
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}