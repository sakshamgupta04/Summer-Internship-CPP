#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l {1,2,3,4,5};
    
    cout<<"List Before Insertion: "<<endl;
    for(int i: l)
    {
        cout<<i<<" ";
    }

    list<int>::iterator itr = l.begin();
    ++itr;
    ++itr;

    l.insert(itr,0);

    cout<<"\nList After insertion: "<<endl;
    for(int i: l)
    {
        cout<<i<<" ";
    }
    return 0;
}