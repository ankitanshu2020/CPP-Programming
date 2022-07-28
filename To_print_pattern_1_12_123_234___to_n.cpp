// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "\nEnter the limit : ";
//     cin >> n;
//     int row = 1;
//     while (row <= n)
//     {
//         int col = 1, value = row;
//         while (col <= row)
//         {
//             cout << value << " ";
//             value++;
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter the limit : ";
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << row + col - 1 << " ";
            col++;
        }
        cout << endl;
        row++;
    }
    return 0;
}