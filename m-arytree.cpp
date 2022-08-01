#include <iostream>
#include <conio.h>

using namespace std;

inline int Leaves_nodes(int m,int n)
{
	return (((m-1)*n+1)/m); 
}
int main()
{
	int m,n;
	cout<<"Enter the value of maximum no. of child nodes in m-ary tree('m'): ";
	cin>>m;
	cout<<"Enter the total number of vertices in the tree('n'): ";
	cin>>n;
	cout<<"Applying the formula for no. of leaves: l=((m-1)*n+1)/m"<<endl;
	cout<<"The number of leaves in the m-ary tree: "<<Leaves_nodes(m,n)<<endl;
	getch();
	return 0;
}
