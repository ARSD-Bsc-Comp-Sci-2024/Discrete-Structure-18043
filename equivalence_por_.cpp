#include <iostream>
#include <conio.h>
using namespace std;
class RELATION
{
    private:
        int **arr;
        int size;
    public:
        static int equivalence;
        static int partial_order_relation;
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
                    // cout<<"Relation is not reflexive."<<endl;
                    return;
                }
            }
            partial_order_relation++;
            equivalence++;
            // cout<<"Relation is reflexive."<<endl;
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
                        // cout<<"Relation is not symmetric."<<endl;
                        return;
                    }
                }
            }
            equivalence++;
            // cout<<"Relation is symmetric."<<endl;
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
                            // cout<<"Relation is not antisymmetric."<<endl;
                            return;
                        }
                    }
                }
            }
            partial_order_relation++;
            // cout<<"Relation is AntiSymmetric"<<endl;
            return;
        }
        void Transitive()
        {
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
                equivalence++;
                partial_order_relation++;
                // cout<<"Is Transitive"<<endl;
                return;
            }
            // cout<<"Is not transitive"<<endl;
            return;

        }
        /* void printing(){
            for (int i = 0; i < size; i++)
            {
                for(int j = 0; j<size;j++)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
             
        }*/
};
int RELATION::equivalence=0;
int RELATION::partial_order_relation=0;
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
    r.reflexive();
    r.AntiSymmetric();
    r.Symmetric();
    r.Transitive();
    if(RELATION::equivalence==3)
    {
        cout<<"The relation is Equivalence"<<endl;
    }
    else if(RELATION::partial_order_relation==3)
    {
        cout<<"The relation is Partial Order Relation"<<endl;
    }
    else{
        cout<<"Relation is nor Equivalence neither Partial Order Relation"<<endl;
    }

    getch();
    return 0;
}