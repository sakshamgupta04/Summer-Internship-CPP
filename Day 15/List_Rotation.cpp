#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l {1,2,3,4,5};
    int len=l.size();

    cout<<"Array Before Swapping: ";
    for(int i: l)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Array After Swapping: "<<endl;
    for(int i=0;i<len;i++)
    {
        int a = l.back();
        for(int j=len-1;j>0;j--)
        {
            l.insert(j,(j-1));
            // l[j]=l[j-1];
        }
        
        l[0]=a;
        
        for(int i:l)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}