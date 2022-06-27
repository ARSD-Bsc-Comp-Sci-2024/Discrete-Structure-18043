#include <iostream>
#include <conio.h>
using namespace std;
int binary_search(int a[],int low, int high,int search)//function to perform binary search
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(a[mid]==search)//if number is equal
        {
            return mid;
        }
        else if(search>a[mid])//if number is present after mid term 
        {
            return binary_search(a,mid+1,high,search);//using recursion
        }
        else if(search<a[mid])//if number is present before mid term
        {
            return binary_search(a,low,mid-1,search);//using recursion
        }
    }
    
    return -1;
}
int main()
{
    int x;
    cout<<"Enter the length of sorted array: ";
    cin>>x;
    int *a=new int(x);//dynamically definig an array
    for(int i=0;i<x;i++)
    {
       cout<<"Enter data at position "<<i+1<<": ";cin>>a[i];
    }
    int num;
    cout<<"Enter element you want to search: ";cin>>num;//entered number to search
    int b=binary_search(a,0,x-1,num);
    if(b==-1)
    {
        cout<<num<<" not present in the array"<<endl;
    }
    else
    {
        cout<<num<<" is present in the array at: "<<b+1<<endl;
    }
    cout<<"Press Enter to exit"<<endl;
    getch();

    return 0;

}