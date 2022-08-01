#include<iostream>
#include<conio.h>
using namespace std;
class completegraph
{
    private:
        int vertices;
        int **a;
    public:
    //initialize the adjacency matrix 
        completegraph(int v)
        {
            vertices=v;
            a=new int*[vertices];
            for (int i = 0; i < vertices; i++)
            {
                a[i]=new int[vertices];
            }
            for (int i = 0; i < vertices; i++)
            {
                for(int j=0;j<vertices;j++)
                {
                    a[i][j]=0;
                }
            }
            
            

        }
        //adding edges to the matrix
        void addedge(int s,int e)
        {
            a[s][e]=1;
            a[e][s]=1;
        }
        //checking if complete graph or not and return either -1 or 2
        int checkcompletegraph()
        {
            for (int i = 0; i < vertices; i++)
            {
                for(int j=0;j<vertices;j++)
                {
                    if(i!=j && a[i][j]==0)
                    {
                        return -1;
                    }
                }
            }
            return 2;
            
        }
        //print the matrix
        void print()
        {
            for (int i = 0; i < vertices; i++)
            {
                for (int j = 0; j < vertices; j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
                
            }
            
        }

};
// MAIN function
int main()
{
    int v,e;
    cout<<"Enter the number of vertices: ";
    cin>>v;
    cout<<"Enter the number of edges: ";
    cin>>e;
    completegraph C(v);
    C.print();
    for (int i = 0; i < e; i++)
    {
        int v1,v2;
        cout<<"Enter the two adjacent vertices of a edge: ";
        cin>>v1>>v2;
        C.addedge(v1-1,v2-1);
    }
    C.print();
    int check;
    check=C.checkcompletegraph();
    if(check==-1)
    {
        cout<<"Graph is not a complete graph"<<endl;
    }
    else if(check==2)
    {
        cout<<"Graph is a complete graph"<<endl;
    }
    getch();
    return 0;
}