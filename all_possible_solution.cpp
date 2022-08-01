#include<iostream>

using namespace std;

void bruteForce(int*, int, int*, int, int, int, int&);

int main()
{
	int n, C, counter = 0, size = 11;
	int arr[size], data[100] = {0};
	cout << "Enter the value of n: ";
	cin >> n;
	for (int i=0; i <= 10; i++) 
		arr[i] = i;
	cout << "Enter the constant (C <= 10): ";
	cin >> C;
    cout<<"Find the Solution of: ";
	for(int i=0; i<n; i++)
		cout<<"+"<< "x" << i+1;
    cout<<" = "<<C<<endl;
	
	bruteForce(arr, size, data, n-1, 0, C, counter);
	cout << "\nFound " << counter << " Solutions\n"; 
	return 0;
}
// using recursion to print all the possible sollution
void bruteForce(int* arr, int size, int* data, int last, int index, int C, int &counter)
{
	for(int i=0; i<size; i++)
	{
		data[index] = arr[i];
		if(index == last)
		{
			int sum = 0;
			for(int j=0; j<index+1; j++)
				sum += data[j];
			
			if(sum == C)//checking if the sum is equal to the entered sum
            // and if the solution is equal the print the solution
			{
				cout << "[ ";
				for(int j=0; j<index+1; j++)
					cout << data[j] << " ";
				cout << "] ";
				counter++;
			}
		}
		
		else
			bruteForce(arr, size, data, last, index+1, C, counter);
	}
}