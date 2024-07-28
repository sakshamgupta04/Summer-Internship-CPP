#include<iostream>
#include<array>
using namespace std;
int main()
{
    array<int,4> a = {3,4,2,7};
    int size = a.size();
    cout<<"Size of array: "<<size<<endl;
    
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at index = "<<a.at(3)<<endl;
    
    bool trueFalse = a.empty();
    cout<<"True or False: "<<trueFalse;
    
    bool empty = a.empty();
    cout<<endl<<"IS array empty or not: "<<empty;
    
    cout<<endl<<"First element = "<<a.front()<<endl;
    
    cout<<"Last element: "<<a.back()<<endl;
    
    return 0;
}
