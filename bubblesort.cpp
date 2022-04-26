#include <iostream>
#include<conio.h>
using namespace std;
class bubble_sort
{
	private:
		int size;
		int *arra;
	public:
		/*CONSTRUCTOR TO INITIALIZE THE ARRAY*/
		bubble_sort(int n)
		{
			size=n;
			arra=new int[size];
			for(int i=0;i<size;i++)
			{
				arra[i]=0;
			}
		}
		void addvalue()
		{
			for(int i=0;i<size;i++)
			{
				cout<<"Enter the "<<i+1<<" data: ";
				cin>>arra[i];
			}
		}
		void sorting()
		{
			int counting=0;
			int counter=1;
			while(counter<size)
			{
				for(int i=size-1;i>=counter;i--)
				{
					if(arra[i-1]>arra[i])
					{
						int temp=arra[i-1];
						arra[i-1]=arra[i];
						arra[i]=temp;
						counting++;
					}
				}
				cout<<"Comparision(s) done in this: "<<counting<<endl;
				counting=0;
				counter++;
			}
		}
		void print()
		{
			for(int i=0;i<size;i++)
			{
				cout<<arra[i]<<" ";
			}
			cout<<endl;
		}
};



/*MAIN PROGRAM STARTS HERE*/

int main()
{
	int n;
    cout<<"Enter the size of array you want: ";cin>>n;
    bubble_sort ob(n);
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
