#include <iostream>
#include <conio.h>
using namespace std;
void fibonacci_series(int n,int first, int second )
{
    cout<<first<<" ";
    if(n==1)
    {
        return;
    }
    fibonacci_series(n-1,second,first+second);
}
int main()
{
    int n;
    cout<<"How many terms you want to see in Fibonacci series: ";
    cin>>n;
    fibonacci_series(n,0,1);
    return 0;
}