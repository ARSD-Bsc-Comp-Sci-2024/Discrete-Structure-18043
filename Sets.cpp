#include <iostream>
#include <vector>
#include<conio.h>
#include <math.h>
using namespace std;
class sets
{
    public:
        static bool ismember(char a, vector<char> &V)                 /*To check if the entered number is a member of the set*/
        {
            for(int i=0;i<V.size();i++)
            {
                if (a==V[i])
                {
                    return true;
                }   
        
            }
            return false;
        }
        static vector<vector<char>> powerset(vector<char> &V)      /*To get the powerset of the user entered set*/                 
        {
            {
                vector<vector<char>> Output;
                for (int i = 0; i < pow(2,V.size()); i++)
                {
                    vector<char>subset;
                    for (int j = 0; j < V.size(); j++)
                    {
            
                        if(i & (1<<j))
                        {
                            subset.push_back(V[j]);//
                
                        }
            
                    }
                    Output.push_back(subset);      //entering the each possible subsets in the power sets.
        
                }
                return Output;                    //returning the power set to the main program.

            }
        }
        static void cardinality(vector<char>a)
        {
            vector<char>b;int k=0;
            for(int i=0;i<a.size();i++)
            {
                for(int j=0;j<b.size();j++)
                {
                    if(a[i]!=b[j]){k+=1;}
                }
                if(k==b.size()){b.push_back(a[i]);}
                k=0;
            }
            cout<<"Number of distinct element in the set: "<<b.size()<<endl;
            return;
        }
        
};
int main()
{
    char n,p;
    int size;
    vector<char> A;
    cout<<"Enter the number of elemets you want to enter the the set: ";cin>>size;//entering the size of set
    for (int x = 0; x < size; x++)
    {
        cout<<"Enter the element "<<(x+1)<<": ";cin>>p;A.push_back(p);//entering the elements of the set as characters.
    }
    cout<<"enter the number you want to search: ";
    cin>>n;
    if(sets::ismember(n,A))//checking for member.
    {
        cout<<n<<" is a member of the Set"<<endl;
    }
    else{
        cout<<n<<" is not a member of the set"<<endl;
    }
    vector<vector<char>> powersets;
    powersets=sets::powerset(A);//returning the powerset as a 2d vector.
    cout<<"{";
    for (int i = 0; i < powersets.size(); i++)
    {
        cout<<"[";
        for (int j = 0; j < powersets[i].size(); j++)
        {
            cout<<powersets[i][j]<<" ";
        }
        
        cout<<"],";
    }
    cout<<"}"<<endl;
    cout<<endl;
    sets::cardinality(A);
    cout<<endl;
    getch();


    return 0;
}
