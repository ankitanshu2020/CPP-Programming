// pattern like 1 2 3 4 ...
//              ...........
//                         nXn

// for n=3, pattern will be like 1 2 3
//                               4 5 6
//                               7 8 9
#include <iostream>
using namespace std;
int main()
{
    int n, i = 1, count = 1;
    cout << "\nEnter the maximum number to print desired pattern : ";
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}