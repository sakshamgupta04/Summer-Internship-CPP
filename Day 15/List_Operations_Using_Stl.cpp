#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int> l = {};
    if(l.empty())
    {
        l.push_front(10);
    }
    else
    {
        l.push_back(20);
    }
    for(int i:l)
    {
        cout<<i;
    }
}