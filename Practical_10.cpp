#include <iostream>
#include <conio.h>
#include <vector>
#include <math.h>
using namespace std;
vector<vector<char>> answer;
inline void swapping(vector<char>&b,int i,int j)
// to swap to adjacent member of the vector
{
    char x=b[i];
    b[i]=b[j];
    b[j]=x;
}
void Permutation(vector<char> &a,int idx)
// to find all possible permutations
{
    if(idx==a.size())
    {
        answer.push_back(a);
    }
    else{
        for(int i=idx;i<a.size();i++)
        {
            swapping(a,idx,i);
            Permutation(a,idx+1);
        }
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the size of vector: ";
    cin>>n;
    vector<char> permutation;
    for(int i=0;i<n;i++)
    {
        char x;
        cout<<"Enter the "<<(i+1)<<" character: ";
        cin>>x;
        permutation.push_back(x);
    }
    Permutation(permutation,0);
    for(int i=0;i<answer.size();i++)
    {
        for(int j=0;j<answer[i].size();j++)
        {
            cout<<answer[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
