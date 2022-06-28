#include <iostream>
#include <conio.h>
using namespace std;
int Linear_Search(int a[],int len,int num)
{
    for(int i=0;i<len;i++)
    {
        if(a[i]==num)
        {
            return i;
        }
    }
    return -1;

}
int main()
{
    int len,num,k;
    cout<<"Enter the size of array: ";
    cin>>len;
    int a[len];
    for (int i = 0; i < len; i++)
    {
        cout<<"Enter the number at "<<i+1<<" position: ";
        cin>>a[i];
    }
    cout<<"Enter the number you want to search: ";
    cin>>num;
    k=Linear_Search(a,len,num);
    if(k==-1)
    {
        cout<<"Number not found in the array."<<endl;
    }
    else 
    {
        cout<<num<<" is found a position "<<k+1<<endl;
    }
    return 0;
    
}