#include <iostream>
using namespace std;
int main()
{
    int a, b, op;
    cout << "\nPlease enter first Integer : ";
    cin >> a;
    cout << "Please enter second Integer : ";
    cin >> b;
    cout << "\nEnter 1. for Addition, \n2. for Subtraction, \n3. for Multiplication, \n4. for Division : ";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Sum is " << (a + b);
        break;
    case 2:
        cout << "Difference is " << (a - b);
        break;
    case 3:
        cout << "Product is " << (a * b);
        break;
    case 4:
        cout << "Quotient is " << (a / b);
        break;
    default:
        cout << "Please enter a valid input ";
    }
    return 0;
}