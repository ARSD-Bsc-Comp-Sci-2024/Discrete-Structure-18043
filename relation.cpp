#include <iostream>
#include <conio.h>
using namespace std;
class RELATION
{
    private:
        int **arr;
        int size;
    public:
        RELATION()
        {
            cout<<"Enter the length of the set: ";cin>>size;
            arr=new int*[size];
            for(int i=0;i<size;i++)
            {
                arr[i]=new int[size];
            }
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size;j++)
                {
                    arr[i][j]=0;
                }
            }
        }
        void enter_data(int i,int j)
        {
            arr[i][j]=1;
        }
        void reflexive()
        {
            for(int i=0;i<size;i++)
            {
                if(arr[i][i]!=1)
                {
                    cout<<"Relation is not reflexive."<<endl;
                    return;
                }
            }
            cout<<"Relation is reflexive."<<endl;
            return;
        }
        void Symmetric()
        {
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size;j++)
                {
                    if((arr[i][j]==1 && arr[j][i]!=1)||(arr[i][j]!=1 && arr[j][i]==1) )
                    {
                        cout<<"Relation is not symmetric."<<endl;
                        return;
                    }
                }
            }
            cout<<"Relation is symmetric."<<endl;
            return;
        }
        void AntiSymmetric()
        {
            for(int i=0;i<size;i++)
            {
                for(int j=0;j<size;j++)
                {
                    if((arr[i][j]==1 && arr[j][i]==1))
                    {
                        if(i!=j)
                        {
                            cout<<"Relation is not antisymmetric."<<endl;
                            return;
                        }
                    }
                }
            }
            cout<<"Relation is AntiSymmetric"<<endl;
            return;
        }
        void Transitive()
        {
            printing();
            bool flag=true;
            for(int i=0;i<size;i++)
            {
                for (int j=0;j<size;j++)
                {
                    if(arr[i][j]==1)
                    {
                        for(int k=0;k<size;k++)
                        {
                            if(arr[j][k]==0)
                            {continue;}
                            else if(arr[i][k]==1)
                            {
                                flag=true;
                                break;
                            }
                            else{
                                flag=false;
                                break;
                            }
                        }
                           
                    }
                }
            }
            if(flag)
            {
                cout<<"Is Transitive"<<endl;
                return;
            }
            cout<<"Is not transitive"<<endl;
            return;

        }
        void printing(){
            for (int i = 0; i < size; i++)
            {
                for(int j = 0; j<size;j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
            
        }
};
int main()
{
    RELATION r;
    int n;
    cout<<"Enter the number of elements in the relation: ";cin>>n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cout<<"Enter the pairs numeric elements of the elements in the relation: ";
        cin>>x>>y;
        r.enter_data(x-1,y-1);
    }
    cout<<endl<<"Checking if REFLEXIVE or not......"<<endl;
    r.reflexive();
    cout<<"Checking if the relation is SYMMETRIC or not....."<<endl;
    r.Symmetric();
    cout<<endl<<"Checking if the relation is ANTISYMMETRIC or not....."<<endl;
    r.AntiSymmetric();
    cout<<"checking if the relations is TRANSITIVE or not......"<<endl;
    r.Transitive();

    getch();
    return 0;
}