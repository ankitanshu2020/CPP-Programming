#include <iostream>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        // 1= prime and 0=not a prime
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int a;
    cout << "\n Enter a number : ";
    cin >> a;
    if (isPrime(a))
    {
        cout << a << " is a Prime Number " << endl;
    }
    else
    {
        cout << a << " is not a Prime Number " << endl;
    }

    return 0;
}