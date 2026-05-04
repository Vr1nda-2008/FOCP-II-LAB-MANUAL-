//set is a container, just like vector, but it stores unique value
// it does not allow duplicate values
// it is sorted in ascending order

#include <iostream>
#include <set>
using namespace std;
int main()
{
    //adding elements to set
    set<int> s;
s={1,1,1,1,3,0,0,0,0,0,4,4};
     cout<<"after sorting: "<<endl;
    for(int x:s)
    {
       
        cout<<x<<" ";
    }
    cout<<endl;
}
//output: 1 3 4
