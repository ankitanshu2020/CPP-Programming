// finding power of a number without using function
// for multiple numbers is a bulky
// so always use a function to make it easy to understand and
// a neat and clean code

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b, ans1 = 1;
    cout << "\nEnter a number : ";
    cin >> a;
    cout << "Enter the power : ";
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        ans1 = ans1 * a;
    }
    cout << "Answer is : " << ans1 << endl;

    int c, d, ans2 = 1;
    cout << "\nEnter a number : ";
    cin >> c;
    cout << "Enter the power : ";
    cin >> d;
    for (int i = 1; i <= d; i++)
    {
        ans2 = ans2 * c;
    }
    cout << "Answer is : " << ans2 << endl;

    int e, f, ans3 = 1;
    cout << "\nEnter a number : ";
    cin >> e;
    cout << "Enter the power : ";
    cin >> f;
    for (int i = 1; i <= f; i++)
    {
        ans3 = ans3 * e;
    }
    cout << "Answer is : " << ans3;
    return 0;
}