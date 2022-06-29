#include <iostream>
using namespace std;
int main()
{
    int val, num, reversedNumber = 0, remainder;
    cout << "\n\n Please enter a positive number : ";
    cin >> val;
    if (val < 0)
    {
        cout << "You entered a positive number, again enter a positeve number" << endl;
    }

    num = val;
    do
    {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num = num / 10;
    } while (num != 0);
    cout
        << "The reverse of " << val << " is " << reversedNumber << endl;

    if (reversedNumber == val)
    {
        cout << "The entered number " << val << " is a Palindrome " << endl;
    }
    else
    {
        cout << "The entered number is not a Palindrome" << endl;
    }

    return 0;
}