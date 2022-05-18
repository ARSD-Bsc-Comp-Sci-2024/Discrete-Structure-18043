#include <iostream>
#include <conio.h>
using namespace std;
class truthtable
{
	private:
		bool x[4];//bool array to store the truth table's value of x
		bool y[4];//bool array to store the truth table's value of y
	public:
		truthtable()//constructor to store the value in the truth table
		{
			int l;
			cout<<"For x"<<endl;
			for(int i=0;i<4;i++)
			{
				cout<<i+1<<" input 1(True)/0(False): ";//taking 1 or 0 as input for true or false respectively for x
				cin>>l;
				if(l==0)
				{
					x[i]=false;//if input is 0 then store false
				}
				else if(l==1)
				{
					x[i]=true;//if input is 1 the store true
				}
				
			}
			cout<<endl<<"For y"<<endl;
			for(int j=0;j<4;j++)
			{
				cout<<" Input 1(True)/0(False): ";//taking input for the truth table of y
				cin>>l;
				if(l==0)
				{
					y[j]=false;//store false in 0
				}
				else if(l==1)
				{
					y[j]=true;//store true if 1
				}
			}
		}
		void print()//member funtion to print the truth table for the values in x and y
		{
			cout<<endl<<"   x  |   y   "<<endl;
			for(int i=0;i<4;i++)
			{
				if(x[i])
				{
					if(y[i])
					{
						cout<<" True | True "<<endl;
					}
					else
					{
						cout<<" True | False"<<endl;
					}
				}
				else
				{
					if(y[i])
					{
						cout<<"False | True "<<endl;
					}
					else
					{
						cout<<"False | False"<<endl;
					}
				}
			}
		}
		void conjunction()//member function to perform conjunction operation on x and y
		{
			cout<<endl<<" x AND y "<<endl;
			for(int i=0;i<4;i++)
			{
				if(x[i] && y[i])
				{
					cout<<"  True   "<<endl;
				}
				else
				{
					cout<<"  False  "<<endl;
				}
			}
			
		}
		void disjunction()//member function to perform disjunction operation on x and y
		{
			cout<<endl<<" x OR y "<<endl;
			for(int i=0;i<4;i++)
			{
				if(x[i] || y[i])
				{
					cout<<"  True   "<<endl;
				}
				else
				{
					cout<<"  False  "<<endl;
				}
			}
		}	
		void exclusiveor()//member function to perfor XOR operation on x and y
		{
			cout<<endl<<" x XOR y "<<endl;
			for(int i=0;i<4;i++)
			{
				if((x[i] && !y[i]) || (!x[i] && y[i]))
				{
					cout<<"  True   "<<endl;
				}
				else
				{
					cout<<"  False  "<<endl;
				}
			}
		}
		void conditional()//member function to show conditional operation on x and y
		{
			cout<<endl<<" x -> y "<<endl;
			for(int i=0;i<4;i++)
			{
				if(!x[i] || y[i])
				{
					cout<<"  True   "<<endl;
				}
				else
				{
					cout<<"  False  "<<endl;
				}
			}
		}
		void biconditional()//member function to perform biconditional operation on x and y
		{
			cout<<endl<<" x <==> y "<<endl;
			for(int i=0;i<4;i++)
			{
				if((!x[i] || y[i]) && (x[i] || !y[i]))
				{
					cout<<"  True   "<<endl;
				}
				else
				{
					cout<<"  False  "<<endl;
				}
			}
		}
		void exclusivenor()//member function to perform XNOR operation x and y
		{
			cout<<endl<<" x XNOR y "<<endl;
			for(int i=0;i<4;i++)
			{
				if((x[i] && y[i]) || (!x[i]) && !y[i])
				{
					cout<<"  True   "<<endl;
				}
				else
				{
					cout<<"  False  "<<endl;
				}
			}
		}
		void negation ()//member function to negate the values in x and y
		{
			cout<<endl<<"  !x  |  !y    "<<endl;
			for(int i=0;i<4;i++)
			{
				if(!x[i])
				{
					if(!y[i])
					{
						cout<<" True | True "<<endl;
					}
					else
					{
						cout<<" True | False"<<endl;
					}
				}
				else
				{
					if(!y[i])
					{
						cout<<"False | True "<<endl;
					}
					else
					{
						cout<<"False | False"<<endl;
					}
				}
			}
		}
		void nand()//member function to perform NAND operation on x and y
		{
			cout<<endl<<" x NAND y "<<endl;
			for(int i=0;i<4;i++)
			{
				if(!(x[i] && y[i]))
				{
					cout<<"  True   "<<endl;
				}
				else
				{
					cout<<"  False  "<<endl;
				}
			}
		}
		void nor()//member function to perform NOR operation on x and y
		{
			cout<<endl<<" x NOR y "<<endl;
			for(int i=0;i<4;i++)
			{
				if(!(x[i] || y[i]))
				{
					cout<<"  True   "<<endl;
				}
				else
				{
					cout<<"  False  "<<endl;
				}
			}
		}
		
};
int main()
{
	truthtable t;//creating object for the class
	//calling each member function one by one to trint the output
	t.print();
	t.conjunction();
	t.disjunction();
	t.exclusiveor();
	t.conditional();
	t.biconditional();
	t.exclusivenor();
	t.negation();
	t.nand();
	t.nor();
	getch();
	return 0;
}
