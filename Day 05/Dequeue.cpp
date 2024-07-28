#include<iostream>
#include<deque>
using namespace std;
int main()
{
    //dequeue means you can perforem puh and pop operations from both ends
    deque<int>d;
    //insertion
    d.push_back(10);
    d.push_front(11);
    for(int i:d)
    {
        cout<<i<<" "<<endl;
    }
    //delete
    d.pop_back();
    for(int i:d)
    {
        cout<<i<<" "<<endl;
    }
    //delete from front
    d.pop_front();
    for(int i:d)
    {
        cout<<i<<" ";
    }
    cout<<endl<<endl<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;
    cout<<"Empty of not "<<d.empty()<<endl;
    cout<<"Before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase "<<d.size()<<endl;
}