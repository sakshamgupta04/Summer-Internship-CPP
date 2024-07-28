#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(11);
    // v.push_back(12);
    // v.push_back(13);
    // v.push_back(10);
    //  for(int i:v)
    // {
    //     cout<<i<<" ";
    // }

    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    for(int i:s)
    {
        cout<<i<<" ";
    }
    set<int>::iterator it=s.begin();
    it++;
    s.erase(it);
    for(auto i:s)
    {
        cout<<endl<<i;
    }
    cout<<endl;
    cout<<"is present"<<s.count(7)<<endl;
set<int>::iterator itr = s.find(5);
for(auto it=itr;it!=s.end();it++)
{
    cout<<*it<<" ";
}
cout<<endl;
}