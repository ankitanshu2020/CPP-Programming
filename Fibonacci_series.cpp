/* FIBONACCI SERIES :- NEXT NUMBER IS THE SUM OF PREVIOUS TWO NUMBERS FOR EXAMPLE 0,1,1,2,3,5,8,13,21,34,55 ETC. THE FIRST TWO NUMBERS OF THE FIBONACCI SERIES ARE 0 AND 1.  */
#include <iostream>
using namespace std;
int main()
{
    int t1 = 0, t2 = 1, num, nextTerm = 0;
    cout << "\nPlease enter the number for printing Fibonacci series : ";
    cin >> num;
    cout << "Fibonacci series : " << t1 << " " << t2 << " "; // printing 0 and 1
    for (int i = 2; i <= num; i++)
    {
        nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
}
