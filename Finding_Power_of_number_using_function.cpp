// we can use function multiple times just calling again and again
#include <iostream>
using namespace std;

int power(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}
int main()
{
    int x, y;
    cout << "\nPlease Enter a number : ";
    cin >> x;
    cout << "Please Enter power : ";
    cin >> y;
    int answer = power(x, y);
    cout << "Answer is : " << answer << endl;

    int m, n;
    cout << "\nPlease Enter a number : ";
    cin >> m;
    cout << "Please Enter power : ";
    cin >> n;
    answer = power(m, n);
    cout << "Answer is : " << answer;
    return 0;
}