#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l {1,2,1,3,4,1};
    cout<<"Initial List: "<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    l.remove(1);
    cout<<endl<<"Final List: "<<endl;
    for(int i:l)
    {
        cout<<i<<" ";
    }
    return 0;
}