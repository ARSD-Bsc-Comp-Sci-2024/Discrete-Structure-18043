#include <iostream>
#include <conio.h>
using namespace std;


int factorial(int n,int num)
{
    if(num==0){
        return n;
    }
    else{
        n*=num;
        return factorial(n,num-1);
    }
}
void size_calculator(int n)
{
    
    int x=factorial(1,5);
    int array[n][z]
    cout<<x<<endl;
}
int main()
{
    size_calculator(0);
    return 0;
}