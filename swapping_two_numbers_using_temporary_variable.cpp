#include <iostream>
using namespace std;
int main()
{
    int a=10,b=4,temp;
    cout<<"Values before swapping"<<endl;
    cout<<"a = " << a <<" and "<<"b = " << b <<endl;
    
    temp=a;
    a=b;
    b=temp;

    cout<<"Values after swapping"<<endl;
    cout<<"a = " << a <<" and "<<"b = "<< b <<endl;

    return 0;

}