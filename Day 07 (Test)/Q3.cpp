/*
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int j=0;j<n;j++)
    {
        cout<<arr[j]<<" ";
    }
}*/
/*#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l={4,5,3,2,543};
    int max=0;

    for(int i:l)
    {
        if(i>max)
        {
            max=i;
        }
    }
    cout<<max;
}*/
#include<iostream>
using namespace std;
int num=0;
int divisibleBy3(int arr[],int n)
{
    for(int j=0;j<n;j++)
    {
        if(arr[j]<0)
        {
            cout<<"Invalid Input";
        }
        else
        {
         if(arr[j]%3==0)
        {
            num+=1;
        }
        }
    }
    return num;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int n=divisibleBy3(arr,n);
    cout<<n;
}