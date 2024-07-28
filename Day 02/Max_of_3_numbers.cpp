#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter value of A: ";
    cin>>a;
    cout<<"Enter value of B: ";
    cin>>b;
    cout<<"Enter value of C: ";
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<"A is largest";
        }
        else
        {
            cout<<"C is largest";
        }
    }
    else
    {
        if(b>c)
        {
            cout<<"B is largest";
        }
        else
        {
            cout<<"C is Largest";
        }
    }
    return 0;
}