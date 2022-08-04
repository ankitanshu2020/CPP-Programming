#include <iostream>
using namespace std;

void count(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    int num;
    cout << "Enter the limit : ";
    cin >> num;
    count(num);
    return 0;
}