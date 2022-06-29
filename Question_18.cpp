#include<iostream>
using namespace std;
class PathFinding
{
    private:
        int **matrix;
        int vertices;
    public:
        PathFinding(int v)
        {
            vertices=v;
            matrix=new int *[vertices];
            for(int i=0;i<vertices;i++)
            {
                matrix[i]=new int [vertices];
            }
            for(int i=0;i<vertices;i++)
            {
                for(int j=0;j<vertices;j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        void addedge(int s,int e)
        {
            matrix[s][e]=1;
            matrix[e][s]=1;
        }
        int** multiply(int **x)
        {
            int **v=new int *[vertices];
            for(int i=0;i<vertices;i++)
            {
                v[i]=new int[2];
            }
            for(int i=0;i<vertices;i++)
            {
                for(int j=0;j<vertices;j++)
                {
                    int h=0;
                    int g=0;
                    for(int k=0;k<vertices;k++)
                    {
                        g=(x[i][k])*(x[k][j]);
                        //cout<<(x[i][k])*(x[k][j])<<" ";
                        h+=g;
                        //cout<<h<<" ";

                    }
                    v[i][j]=h;
                }
            }
            return v;
        }
        int** eQual()
        {
            int **f=new int*[vertices];
            for(int i=0;i<vertices;i++)
            {
                f[i]=new int[vertices];
            }
            for(int i=0;i<vertices;i++)
            {
                for(int j=0;j<vertices;j++)
                {
                    f[i][j]=matrix[i][j];
                }
            }
            return f;
        } 
        int findpath(int n,int start, int end)
        {
            int **f;
            f=eQual();
            for(int i=1;i<n;i++)
            {
                f=multiply(f);
            }
            if(f[start-1][end-1]<=0)
            {
                return 0;
            }
            else
            {
                return f[start-1][end-1];
            }
        }
        ~PathFinding(){}
};

int main()
{
    cout<<"Enter the number of vertices: ";
    int v;
    cin>>v;
    PathFinding p(v);
    cout<<"Enter the number of edges: ";
    int edge;
    cin>>edge;
    for(int i=0;i<edge;i++)
    {
        int x,y;
        cin>>x>>y;
        p.addedge(x-1,y-1);
    }
    int n;
    cout<<"Enter the length of path: ";
    cin>>n;
    int x1,x2;
    cout<<"Enter the starting and ending vertices: ";
    cin>>x1>>x2;
    n=p.findpath(n,x1,x2);
    if(n==0)
    {
        cout<<"no path possible of the specified length for the specified vertices"<<endl;
    }
    else
    {
        cout<<"The number of path possible are: "<<n<<endl;
    }
    return 0;
}