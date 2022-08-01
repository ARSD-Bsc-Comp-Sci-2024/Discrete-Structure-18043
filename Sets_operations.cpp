#include <iostream>
#include <conio.h>
#include <vector>
#include <math.h>
using namespace std;

class Set_operations
{
    private:
        vector<int>set1;//set-1
        vector<int>set2;//set-2
    public:
        //initialize the sets
        Set_operations()
        {   
            int n1=0;
            cout<<"For Set1"<<endl;
            while (n1!=-1)
            {
                cout<<"Enter the elements for the first set(Enter -1 to stop entering): ";
                cin>>n1;
                if(n1!=-1)
                {
                    this->set1.push_back(n1);
                }
            }
            n1=0;
            cout<<"For Set2"<<endl;
            while(n1!=-1)
            {
                cout<<"Enter the element for second set(Enter -1 for stop entering): ";
                cin>>n1;
                if(n1!=-1)
                {
                    this->set2.push_back(n1);
                }
            }

        }


        vector<int> UNION()//return the union of the sets
        {
            int g=0;
            vector<int> UNION;
            for(int i=0;i<this->set1.size();i++)
            {
                UNION.push_back(this->set1[i]);
            }
            for(int i=0;i<this->set2.size();i++)
            {
                for(int j=0;j<UNION.size();j++)
                {
                    if(this->set2[i]!=UNION[j])
                    {
                        g+=1;
                    }
                    
                }
                if(g==UNION.size())
                {
                    UNION.push_back(this->set2[i]);
                }
                g=0;
                
            }
            return UNION;
        }


        vector<int> INTERSECTION()//return the intersection of the two set
        {
            vector<int>intersection;
            int g=0;
            for(int i = 0 ; i < this->set1.size() ; i++)
            {
                for(int j = 0 ; j<this->set1.size() ; j++)
                {
                    if(this->set2[i] == this->set1[j])
                    {
                        for(int k = 0 ; k < intersection.size() ; k++)
                        {
                            if(this->set1[j]!=intersection[k])
                            {
                                g+=1;
                            }
                    
                        }
                        if(g==intersection.size())
                        {
                            intersection.push_back(this->set1[j]);
                        }
                        g=0;
                    }            
                }
            }
            return intersection;
        }


        void COMPLEMENT()//print the complement of both the sets w.r.t to user entered universal set.
        {
            vector<int> UNIVERSAL_SET;
            vector<int> comp_set1;
            vector<int> comp_set2;
            int n=0;
            /* entering the Universal Set */
            while(n!=-1)
            {
                cout<<"Enter the number for the universal set(enter -1 to stop entering): ";
                cin>>n;
                if(n!=-1)
                {
                    UNIVERSAL_SET.push_back(n);
                }
            }
            /* Complement of set-1 */
            n=0;
            for(int i=0;i<UNIVERSAL_SET.size();i++)
            {
                for(int j=0;j<this->set1.size();j++)
                {
                    if(UNIVERSAL_SET[i]==this->set1[j])
                    {
                        n=1;break;
                    }
                }
                if(n!=1)
                {
                    comp_set1.push_back(UNIVERSAL_SET[i]);
                }
                n=0;
            }
            /* Complement if of the set-2 */
            n=0;
            for(int i=0;i<UNIVERSAL_SET.size();i++)
            {
                for(int j=0;j<this->set2.size();j++)
                {
                    if(UNIVERSAL_SET[i]==this->set2[j])
                    {
                        n=1;break;
                    }
                }
                if(n!=1)
                {
                    comp_set2.push_back(UNIVERSAL_SET[i]);
                }
                n=0;
            }
            //printing the complements of the sets
            cout<<"Complement of Set 1: ";
            for(int k = 0 ; k < comp_set1.size() ; k++)
            {
                cout<<comp_set1[k]<<" ";
            }
            cout<<endl<<"Complement of Set2: ";
            for(int k = 0 ; k < comp_set2.size() ; k++)
            {
                cout<<comp_set2[k]<<" ";
            }
            cout<<endl;
            
        }


        void set_difference_and_symmetric_differnce()// print the set difference of both sets from each other and their symmetric difference
        {
            vector<int> set1_set2;
            vector<int> set2_set1;
            vector<int> sd;
            int n=0;
            //Set difference set2 from set1 
            for(int i=0;i<this->set1.size();i++)
            {
                for(int j=0;j<this->set2.size();j++)
                {
                    if(this->set1[i]==this->set2[j])
                    {
                        n=1;break;
                    }
                }
                if(n!=1)
                {
                    set1_set2.push_back(this->set1[i]);
                }
                n=0;
            }
            n=0;
            //Set difference set1 from set2 
            for(int i=0;i<this->set2.size();i++)
            {
                for(int j=0;j<this->set1.size();j++)
                {
                    if(this->set2[i]==this->set1[j])
                    {
                        n=1;break;
                    }
                }
                if(n!=1)
                {
                    set2_set1.push_back(this->set2[i]);
                }
                n=0;
            }

            cout<<"Set1 - Set2: ";
            for(int k = 0 ; k < set1_set2.size() ; k++)
            {
                cout<<set1_set2[k]<<" ";
            }
            cout<<endl<<"Set2 - Set1: ";
            for(int k = 0 ; k < set2_set1.size() ; k++)
            {
                cout<<set2_set1[k]<<" ";
            }
            cout<<endl; 
            int k=0;
            //Symmetric Difference1
            vector<int>x=UNION();
            vector<int>y=INTERSECTION();
            for(int i=0;i<x.size();i++)
            {
                for(int j=0;j<y.size();j++)
                {
                    if(x[i]==y[j])
                    {
                        k=1;break;
                    }
                }
                if(k!=1)
                {
                    sd.push_back(x[i]);
                }
                k=0;
            }
            cout<<"Symmetric Difference: ";
            for(int i=0;i<sd.size();i++)
            {
                cout<<sd[i]<<" ";
            }
            cout<<endl;
            for (int i = 0; i < y.size(); i++)
            {
                cout<<y[i]<<" ";
            }
            
        }
        void CARTESIAN_PRODUCT()//print the cartesian product of the two entered sets
        {
            cout<<"Cartesian Product: Set1 X Set2: "<<endl;
            cout<<"{ ";
            for(int i=0;i<this->set1.size();i++)
            {
                for(int j=0;j<this->set2.size();j++)
                {
                    cout<<'('<<this->set1[i]<<','<<this->set2[j]<<')';
                    if((i+j)==(this->set1.size()+this->set2.size()-2))
                    {
                        break;
                    }
                    else{
                        cout<<", ";
                    }
                }
                
            }
            cout<<" }";
            cout<<endl<<"Cartesian Product: Set2 X Set1: "<<endl;
            cout<<"{ ";
            for(int i=0;i<this->set2.size();i++)
            {
                for(int j=0;j<this->set1.size();j++)
                {
                    cout<<'('<<this->set2[i]<<','<<this->set1[j]<<')';
                    if((i+j)==(this->set1.size()+this->set2.size()-2))
                    {
                        break;
                    }
                    else{
                        cout<<", ";
                    }
                }
                
            }
            cout<<" }";
        }
        void subset()
        {
            int n=0;
            if(this->set1.size()>this->set2.size())
            {
                for (int i = 0; i < this->set2.size(); i++)
                {
                    for(int j=0;j<this->set1.size();j++)
                    {
                        if(this->set2[i]==this->set1[j])
                        {
                            n++;
                        }
                    }
                }
                if(n==this->set2.size())
                {
                    cout<<"Set2 is a subset of Set1."<<endl;
                }
                
            }
            
            else if(this->set2.size()>this->set1.size())
            {
                n=0;
                for (int i = 0; i < this->set1.size(); i++)
                {
                    for(int j=0;j<this->set2.size();j++)
                    {
                        if(this->set1[i]==this->set2[j])
                        {
                            n++;
                        }
                    }
                }
                if(n==this->set1.size())
                {
                    cout<<"Set1 is a subset of Set2."<<endl;
                }
                
            }
            else if(this->set1.size()==this->set2.size())
            {
                n=0;
                for (int i = 0; i < this->set2.size(); i++)
                {
                    for(int j=0;j<this->set1.size();j++)
                    {
                        if(this->set2[i]==this->set1[j])
                        {
                            n++;
                        }
                    }
                }
                if(n==this->set2.size())
                {
                    cout<<"Set2 is equal to Set1."<<endl;
                }
                
            }
        }
};
//main program
int main()
{
    Set_operations stop;
    cout<<"1. Union of the sets\n2. Intersection of the sets\n3. Complement of the sets\n4. Print the set difference and Symmetric difference\n5. Check if subset or equal\n6.Print the Cartesian Product."<<endl;
    vector<int>unin=stop.UNION();
    cout<<"UNION: ";
    for (int i = 0; i < unin.size(); i++)
    {
        cout<<unin[i]<<",";
    }
    cout<<endl;
    vector<int>itrsct=stop.INTERSECTION();
    cout<<"INTERSECTION: ";
    for (int i = 0; i < itrsct.size(); i++)
    {
        cout<<itrsct[i]<<",";
    }
    cout<<endl;
    stop.COMPLEMENT();
    cout<<endl;
    stop.set_difference_and_symmetric_differnce();cout<<endl;
    stop.subset();cout<<endl;
    stop.CARTESIAN_PRODUCT();cout<<endl;
    getch();
    return 0;
}