// To print 1 2 3 4 ... n n times

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "\nEnter the maximum value for print desired pattern : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// To print n...3 2 1 n times

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter the maximum value for print desired pattern : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << n - j << " "; // n-j-1 in using while loop
        }
        // for (int j = n; j > 0; j--)
        // {
        //     cout << j << " ";
        // }
        cout << endl;
    }
    return 0;
}