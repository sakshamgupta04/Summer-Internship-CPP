#include<iostream>
#include "myheader.h"
using namespace std;

int add(int x,int y);
int sub(int x,int y);

int main()
{
    cout<<"Add function: "<<add(10,20)<<endl;
    cout<<"Sub function: "<<sub(10,20)<<endl;
    return 0;
}