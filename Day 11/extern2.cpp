#include<iostream>
using namespace std;
extern int globalVar;
int main()
{
    cout<<globalVar;
}
void example(int globalVar1)
{
   globalVar1++;
}