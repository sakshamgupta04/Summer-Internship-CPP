#include<iostream>
using namespace std;
int main()
{
    register int counter =0;
    for(register int i=0;i<10;++i)
    {
        counter+=i;
    }
    cout<<counter;
}