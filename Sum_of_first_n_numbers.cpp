#include <iostream>
using namespace std;

int main(){
    // int n,sum=0,i=0;
    // cout<<"Enter the number : ";
    // cin>>n;
    // while(i<=n){
    // sum=sum+i;
    // i++;
    // }
       
    // cout<<"Sum of the first "<< n <<" numbers is : "<<sum<<endl;
    int n, sum=0;
    cout<<"Enter the number : ";
    cin>>n;
    while(n>0){
    sum=sum+n;
    n--;
    }

    cout<<"Sum is : "<<sum<<endl;

    return 0;
}