#include<conio.h>
#include<iostream>
using namespace std;
class path_circuit
{
    private:
        int **a;
        int vertices;
    public:
        int x;
        int y;
        //Initializing the adjacency matrix
        path_circuit(int v)
        {
            vertices=v;
            a=new int*[v];
            for(int i=0;i<vertices;i++)
            {
                a[i]=new int [vertices];
            }
            for(int i=0;i<vertices;i++)
            {
                for(int j=0;j<vertices;j++)
                {
                    a[i][j]=0;
                }
            }
        }
        //adding edges to the matrix

        /* void addedge(int s,int e)
        {
            
        } */
        //check for euler path and euler circuit
        string pathcircuitcheck()
        {
            int deg=0,even=0;
            for(int i=0;i<vertices;i++)
            {
                for(int j=0;j<vertices;j++)
                {
                    deg=deg+a[i][j];
                }
                if(deg%2==0)
                {
                    even+=1;
                    deg=0;
                }
                else{
                    deg=0;
                }
            }
            if(even==2)
            {
                cout<<"Degnum: "<<even<<endl;
                return "Graph has only Euler Path.";
            }
            else if(even==vertices)
            {
                cout<<"Degnum: "<<even<<endl;
                return "Graph has both Euler Path and Euler Circuit.";
            }
            else
            {
                cout<<"Degnum: "<<even<<endl;
                return "Neither Euler Pathe nor Euler Circuit.";
            }
        }
        //print the adjacency matrix
        /* void print()
        {
            for(int i=0;i<vertices;i++)
            {
                for(int j=0;j<vertices;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        } */
        void operator =(path_circuit o)
        {
            a[this->x][o.y]+=1;
            a[o.x][this->y]+=1;
        }
};

int main()
{
    int v,e;
    cout<<"Enter the number of vertices: ";
    cin>>v;
    path_circuit el(v);
    /* el.print(); */
    cout<<"Enter the number of edges: ";
    cin>>e;
    for(int i=0;i<e;i++)
    {
        /* int n1,n2; */
        cout<<"Enter the pair of adjacent vertices: "<<endl;
        cin>>el.x>>el.y;
        el=el;
    }
    /* el.print(); */
    string result=el.pathcircuitcheck();
    cout<<result<<endl;//print the the returned string from pathcircuitcheck()
    getch();    
    return 0;
}