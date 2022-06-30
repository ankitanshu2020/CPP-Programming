#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "\nPlease enter the maximum value for the sum of the even numbers : ";
    cin >> num;

    for (int i = 2; i <= num; i = i + 2)
    {
        sum = sum + i;
    }

    cout << "Ther sum of the even numbers upto " << num << " is " << sum << endl;

    return 0;
}