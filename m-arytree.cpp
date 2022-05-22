#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int m,l,n;
	cout<<"Enter the value of maximum no. of  in m-ary tree: ";
	cin>>m;
	cout<<"Enter the numberof vertices in the tree: ";
	cin>>n;
	l=((m-1)*n+1)/m;
	cout<<"The number of leaves in the m-ary tree: "<<l<<endl;
	getch();
	return 0;
}
