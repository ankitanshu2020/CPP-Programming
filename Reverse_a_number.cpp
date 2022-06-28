#include <iostream>
using namespace std;
int main()
{
    int num, val, reversedNumber = 0, remainder;
    cout << "Please enter the number : ";
    cin >> num;
    val = num;

    while (val != 0)
    {
        remainder = val % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        val = val / 10;
    }
    cout << "The reverse of " << num << " is " << reversedNumber << endl;
    return 0;
}