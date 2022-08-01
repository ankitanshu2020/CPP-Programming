#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cout << "\nEnter the limit for sum : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "The sum of Natural numbers upto " << n << " is " << sum << endl;
    return 0;
}