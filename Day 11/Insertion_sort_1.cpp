#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int>&v)
{
    for(size_t i=1;i<v.size();++i)
    {
        int key=v[i];
        int j=i-1;
        while(j>=0 && v[j]>key)
        {
            v[j+1] = v[j];
            --j;
        }
        v[j+1] = key;
    }
}

int main()
{
    vector<int> v = {5,2,4,6,1,3};
    insertionsort(v);
    for(int i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}