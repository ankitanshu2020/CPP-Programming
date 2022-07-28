#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int choice;
    cout << "\nEnter 1 for Triangle.\nEnter 2 for Rectangle.\nEnter 3 for Square.\nEnter 4 for Parallelogram.\nEnter 5 for circle" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int a, b, c;
        float s, area;
        cout << "Enter the sides of Triangle : ";
        cin >> a >> b >> c;
        s = (float)(a + b + c) / 2;
        area = (float)(sqrt(s * (s - a) * (s - b) * (s - c)));
        cout << "The area of Triangle is " << area;
    }
    break;
    case 2:
    {
        int l, b, area;
        cout << "Enter the value for Length and Breadth of Rectangle : ";
        cin >> l >> b;
        area = l * b;
        cout << "The area of Rectangle is " << area;
    }
    break;
    case 3:
    {
        int side, area;
        cout << "Enter the side of Square : ";
        cin >> side;
        area = side * side;
        cout << "The area of Square is " << area;
    }
    break;
    case 4:
    {
        int base, height, area;
        cout << "Enter the base and height of the Parallelogram : ";
        cin >> base >> height;
        area = base * height;
        cout << "The area of Parallelogram is " << area;
    }
    break;
    case 5:
    {
        int radius;
        float area;
        cout << "Enter the radius of Circle : ";
        cin >> radius;
        area = (float)(3.14 * radius * radius);
        cout << "The area of Circle is " << area;
    }
    }
    return 0;
}