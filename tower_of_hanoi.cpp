#include <iostream>
#include <string>
using namespace std;

void TowerOfHanoi(int start, int end,string starting,string temporary,string destination)
{
    if(start>end){return;}
    else
    {
        TowerOfHanoi(start,end-1,starting,destination,temporary);
        cout<<"move disk"<<end<<" from "<<starting<<" to "<<destination<<endl;
        TowerOfHanoi(start,end-1,temporary,starting,destination);
    }
}

int main()
{
    cout<<"Transfering 3 disks from Rod_1 to Rod_3"<<endl;
    TowerOfHanoi(1,3,"Rod_1","Rod_2","Rod_3");
    return 0;
}