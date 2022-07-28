#include <bits/stdc++.h>
using namespace std;
void quadrant(int x, int y)
{
    if (x > 0 && y > 0)
    {
        cout << "Lies in first quadrant";
    }
    else if (x < 0 && y > 0)
    {
        cout << "Lies in second quadrant";
    }
    else if (x < 0 && y < 0)
    {
        cout << "Lies in third quardrant";
    }
    else if (x > 0 && y < 0)
    {
        cout << "Lies in fourth quadrant";
    }
    else
    {
        cout << "Lies in origin";
    }
}
int main()
{
    int a, b;
    cout << "Enter the values to check quadrant ";
    cin >> a >> b;
    quadrant(a, b);
    return 0;
}
