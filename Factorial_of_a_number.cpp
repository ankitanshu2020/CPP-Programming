#include <iostream>
using namespace std;
int main()
{
    int val, num, factorial = 1;
    cout << "\nPlease enter a number : ";
    cin >> val;
    num = val;
    for (int i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    cout << "Factorial of the number " << num << " is " << factorial << endl;
    return 0;
}