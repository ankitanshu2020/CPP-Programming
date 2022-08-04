#include <iostream>
using namespace std;

int factorial(int a)
{
    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int nC r(int n, int r)
{

    int num = factorial(n);
    int denom = factorial(n - r) * factorial(r);
    return num / denom;
}

int main()
{
    int n, r, result;
    cout << "\nEnter value of n : ";
    cin >> n;
    cout << "Enter value of r : ";
    cin >> r;
    result = nCr(n, r);
    cout << "Answer of " << n << "C" << r << " is : " << result;
    return 0;
}