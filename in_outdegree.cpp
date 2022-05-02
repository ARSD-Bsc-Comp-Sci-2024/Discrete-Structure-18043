#include<iostream>
#include<conio.h>
using namespace std;
class in_outdegree
{
    int vertices;
    int edges;
    int **a;
    public:
        in_outdegree(int v,int e)
        {
            /* initialising the incidence matrix */
            vertices=v;
            edges=e;
            a=new int*[vertices];
            for (int i = 0; i < vertices; i++)
            {
                a[i]=new int[edges];
            }
            for (int i = 0; i < vertices; i++)
            {
                for(int j=0;j<edges;j++)
                {
                    a[i][j]=0;
                }
            }
            
            
        }
        /* adding outdegree edges */
        void outdegree(int s,int g)
            {
                a[s][g]=1;
            }
        
        /* adding indegree elements */
        void indegree(int s,int g)
        {
            a[s][g]=-1;
        }
        void check()
        {
            int indegree=0,outdegree=0;
            for(int i=0;i<vertices;i++)
            {
                for(int j=0;j<edges;j++)
                {
                    if(a[i][j]==1)
                    {
                        outdegree++;
                    }
                    else if(a[i][j]==-1)
                    {
                        indegree++;
                    }
                }
                cout<<i+1<<" Vertice have "<<outdegree<<" outdegree and "<<indegree<<" indegree."<<endl;
                indegree=0;outdegree=0;

            }
        }

};
int main()
{
    int e,v;
    cout<<"Enter the no. of edges: ";
    cin>>e;
    cout<<"Enter the no. of vertices: ";
    cin>>v;
    in_outdegree inout(v,e);
    cout<<"For Incident out Edges"<<endl;
    for(int i=0;i<e;i++)
    {
        int V,E;
        cout<<"Enter the edge: ";
        cin>>E;
        cout<<"Enter the vertex: ";cin>>V;
        inout.outdegree(V-1,E-1);


    }
    cout<<"For Incident in Edges"<<endl;
    for(int i=0;i<e;i++)
    {
        int V,E;
        cout<<"Enter the edge: ";
        cin>>E;
        cout<<"Enter the vertex: ";cin>>V;
        inout.indegree(V-1,E-1);


    }
    inout.check();/* to check the indegree and outdegree of the vertices */

    getch();
    return 0;
}