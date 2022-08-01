#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n, i = 0, ans = 0;
    cout << "\nPlease enter a decimal number : ";
    cin >> n;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        i++;
        n = n >> 1;
    }
    cout << "Binary is " << ans;
    return 0;
}