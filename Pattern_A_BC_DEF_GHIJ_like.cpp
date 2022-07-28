#include <iostream>
using namespace std;
int main()
{
    int n, row = 1;
    cout << "\nEnter the limit : ";
    cin >> n;
    char count = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}
