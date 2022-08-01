/* To store a polynomial function and evaluate the value of the function  */
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
class polynomial
{
    private:
        double *coefficient;
    public:
        polynomial(int i)
        {
            coefficient=new double[i+1];
            for(int n=0;n<=i;n++)
            {
                coefficient[n]=0;
            }
        }

        void enter(int n){
            for(int i=0;i<=n;i++)
            {
                cout<<"Enter the value of coefficient a"<<i+1<<": ";
                cin>>this->coefficient[i];
            }
        }

        void display(int n)
        {
            for(int i=0;i<=n;i++)
            {
                if(this->coefficient[i]>=0)
                {
                    cout<<"+"<<this->coefficient[i]<<"x^"<<n-i;
                }
                else
                {
                    cout<<this->coefficient[i]<<"x^"<<n-i;
                }
                 
            }
            cout<<endl;
        }
        double solve(int x,int n)
        {
            double d=0;
            for(int i=0;i<=n;i++)
            {
                // cout<<(this->coefficient[i]*pow(x,n-i))<<endl;
                d+=(this->coefficient[i]*pow(x,n-i));
                
            }
            return d;

        }
};
int main()
{
    int n;
    cout<<"Enter the degree of the polynomial: ";cin>>n;
    polynomial p(n);
    p.enter(n);
    cout<< "The polynomial formed is :";p.display(n);
    cout<<"Enter the value of the varialble for the polynomial: ";
    int x;
    cin>>x;
    cout<<"After solving the polynomial the answer is: "<<p.solve(x,n)<<endl;

    getch();
    return 0;
}