/* Write a program to find maximum element in list*/
#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l;
    l.push_back(10);
    l.push_front(20);
    l.push_front(21);
    l.push_back(10);
    l.push_front(12);
    l.push_front(10);
    for(int i:l)
    {
        cout<<i<<" ";
    }
    int size = l.size();
    int max = 0;
    for(int i: l)
    {
        if(i>max)
        {
            max = i;
        }
    }
    cout<<endl<<"Maximum element is : "<<max<<endl;
}