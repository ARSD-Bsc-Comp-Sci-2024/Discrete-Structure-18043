#include <iostream>
#include <conio.h>
using namespace std;
int factorial(int n,int Factorial=1)
{
    if(n==0)
    {return Factorial;}
    else{
        Factorial*=n;
        return factorial(n-1,Factorial);
    }
}
int ncr(int n,int r)
{
    return (factorial(n)/(factorial(r)*factorial(n-r)));
}
int npr(int n,int r)
{
    return (factorial(n)/(factorial(n-r)));
}



int main()
{
    cout<<"1. Permutation\n2. Combination"<<endl;
    int choice;
    cout<<"Enter your Choice: ";cin>>choice;
    switch (choice)
    {
        case 1:{
            int n=0,r=1;
            while(n<r)
            {
                cout<<"Enter the value of n: ";cin>>n;
                cout<<"Enter the value of r: ";cin>>r;
                if(n<r)
                {
                    cout<<"n is smaller than r please enter again...."<<endl;
                }
            }
            cout<<"number of arrangement can be done are: "<<npr(n,r)<<endl;
        }
        break;
        case 2:
        {
            int n=0,r=1;
            while(n<r)
            {
                cout<<"Enter the value of n: ";cin>>n;
                cout<<"Enter the value of r: ";cin>>r;
                if(n<r)
                {
                    cout<<"n is smaller than r please enter again...."<<endl;
                }
            }
            cout<<"number of combination can be formed are: "<<ncr(n,r)<<endl;
        }
        break;
        default:
            cout<<"Wrong choice is entered......"<<endl;
            break;
    }
    getch();
    return 0;
}