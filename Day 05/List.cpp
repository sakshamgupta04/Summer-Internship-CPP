#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_front(12);
    l.push_front(10);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // l.erase(l.begin());
    // cout<<"After erase: "<<endl;
    for(int i: l)
    {
        cout<<endl<<"Display List: "<< i<<" ";
    }
    cout<<endl<<"Size of list: "<<l.size()<<endl;

    l.reverse();
    for (int i : l) 
    {
        cout <<"Reverse: "<< i << " ";
    }

    l.unique();
    for (int i : l) 
    {
        cout <<"Unique: "<< i << " ";
    }

    l.resize(5);
    cout<<endl<<"List resized...";
    for (int i : l) 
    {
        cout << i << " ";
    }

}