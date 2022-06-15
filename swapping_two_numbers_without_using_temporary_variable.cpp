#include <iostream>
using namespace std;
int main()
{
    int a=10,b=4;
    cout<<"Values before swapping"<<endl;
    cout<<"a = "<< a <<" and "<< "b = " << b << endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Values after swapping"<<endl;
    cout<<"a = " << a <<" and "<<"b = " << b << endl;

    return 0;
    }