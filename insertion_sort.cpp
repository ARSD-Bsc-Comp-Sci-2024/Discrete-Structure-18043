#include <iostream>
#include <conio.h>
using namespace std;
class insertion_sort
{
	private:
		int size;
		int *arra;
	public:
		insertion_sort(int n)
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
				cout<<"Enter the "<<i+1<<" data: ";cin>>arra[i];
			}

		}
		void sorting()
		{
			int counting=0;
			for(int i=1;i<size;i++)
			{
				int current=arra[i];
				int j=i-1;
				while(current<arra[j] && j>=0)
				{
					arra[j+1]=arra[j];
					arra[j]=current;
					j--;
					counting++;
				}
				cout<<"Comparision(s) done in this iteration: "<<counting<<endl;
				counting=0;
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
    insertion_sort ob(n);
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
