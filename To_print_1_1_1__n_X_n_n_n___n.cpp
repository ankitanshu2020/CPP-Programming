#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "\nEnter the value to print the above pattern of star : ";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << " " << i << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}