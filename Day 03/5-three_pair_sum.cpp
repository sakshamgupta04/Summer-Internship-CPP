#include<iostream>
using namespace std;
int main()
{
    // given an array of N element, and a number value
    // the task is to find the numberof pairs of integer in the array whose sum is equal to given value 
    // pairs(a,b)
    int a[5]= {1,4,2,3,8};
    int value = 7;
    int count =0;
    // pick the first element of the pairs
    for (int i = 0;i<5;i++)
    {
        // pick the second element of the pair along with a[i]
        for (int j = i+1;j<5;j++)
        {
            for(int k=j+1;k<5;k++)
            {
                if(a[i]+a[j]+a[k] == value)
                {
                    count++;
                }
            }
        }
    }
    cout<<"The count of pairs "<<value<<" is "<<count<<endl;
    return 0;
}