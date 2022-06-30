// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cout << "\nEnter the value for printing star pattern : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter the value to print n x n star pattern : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << " * ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}