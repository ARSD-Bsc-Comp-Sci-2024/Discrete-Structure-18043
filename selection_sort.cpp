#include <iostream>
#include<conio.h>
using namespace std;
class selection_sort
{
	private:
		int size;
		int *arra;
	public:

		/*PARAMETRIZED CONSTRUCTOR TO INITIALIZE THE ARRAY*/


		selection_sort(int n)
		{
			size=n;
			arra=new int [size];
			for(int i=0;i<size;i++)
			{
				arra[i]=0;
			}
		}


		/*MEMBER FUNCTION TO ADD VALUE TO THE EMPTY ARRAY*/


		void addvalue()
		{
			for(int i=0;i<size;i++)
			{
				cout<<"Enter the "<<i+1<<" data: ";cin>>arra[i];
			}
		}


		/*MEMBER FUNCTION TO SORT THE ARRAY IN ASCENDING ORGER*/


		void sorting()
		{
			int minimum,minimum_index;
			for(int i=0;i<size;i++)
			{
				int j;
				minimum=arra[i];
				minimum_index=i;
				int counting=0;

				for(j=i+1;j<size;j++)
				{

					if(minimum>arra[j])
					{

						minimum=arra[j];
						minimum_index=j;
						counting++;

					}

				}

				cout<<"Comparision done in this iteration: "<<counting<<endl;
				counting=0;
				int k1=arra[i];
				arra[i]=minimum;
				arra[minimum_index]=k1;		
		
			}
		}


		/*MEMBER FUNCTION TO PRINT THE CONTENT OF THE ARRAY*/


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
    selection_sort ob(n);
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
