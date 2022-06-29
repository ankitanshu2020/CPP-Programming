#include <iostream>
using namespace std;
int main()
{
    int num1, num2, val, sum = 0;
    cout << "Please enter the Lower Bound : ";
    cin >> num1;
    cout << "Please enter the Upper Bound : ";
    cin >> num2;

    for (val = num1; val <= num2; val++)
    {
        if (val % 2 == 0)
        {
            sum = sum + val;
        }
    }

    cout << "\nThe sum of the even numbers between " << num1 << " and " << num2 << " is : " << sum << endl;
    return 0;
}