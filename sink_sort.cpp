#include<iostream>
#include <conio.h>
using namespace std;
class sink_sort
{
    private:
        int size;
        int *a;
    public:
    /* Parameterized constructor to initialize the array of user input size */
        sink_sort(int n)
        {
            size=n;
            a=new int [size];
            for (int i = 0; i < size; i++)
            {
                a[i]=0;
            }
            
        }
        /* Function to add data in the empty array */
        void addvalue()
        {
            for (int i = 0; i < size; i++)
            {
                cout<<"Enter "<<i+1<<" data: ";
                cin>>a[i];
            }
            cout<<endl;
            
        }
        /* Function to sort the array */
        void sorting()
        {
            int counting=0;
            int counter=0;
            while (counter<size)
            {
                for(int i=0;i<size-counter;i++)
                {
                    if(a[i]>a[i+1])
                    {
                        int temp=a[i];
                        a[i]=a[i+1];
                        a[i+1]=temp;
                        counting++;
                    }
                }
                cout<<"Total number of comparision in this iteration: "<<counting<<endl;
                counting=0;
                counter++;
            }
            
        }
        /* Function to print the array */
        void print()
        {
            for (int i = 0; i < size; i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
            
        }
};
/* Main Program */
int main()
{
    int n;
    cout<<"Enter the size of array you want: ";cin>>n;
    sink_sort ob(n);
    cout<<"Empty set"<<endl;
    ob.print();/* printing the empty array */
    cout<<"Adding value in the empty array"<<endl;
    ob.addvalue();
    ob.print();/* printing the array after adding values */
    cout<<"Sorting the array"<<endl;
    ob.sorting();
    ob.print();/* Printing the array after sorting */
    getch();
    return 0;

}