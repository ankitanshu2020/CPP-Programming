#include <iostream>
using namespace std;

bool isEven(int a)
{
    if (a & 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int num;
    cout << "\nEnter any number : ";
    cin >> num;
    if (isEven(num))
    {
        cout << "Number is even";
    }
    else
    {
        cout << "Number is odd";
    }
    return 0;
}