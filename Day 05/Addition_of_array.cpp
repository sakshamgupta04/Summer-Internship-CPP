#include<iostream>
#include<array>
using namespace std;
int main()
{
    int sum=0;
    array<int,9> a = {-2,1,-3,4,-1,2,1,-5,4};
    for(int i=0;i<a.size();i++)
    { 
        sum += a[i];
    }
    cout<<"Sum is: "<<sum;
    return 0;
}