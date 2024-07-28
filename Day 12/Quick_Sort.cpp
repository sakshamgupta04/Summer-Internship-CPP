#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> arr = {10,7,8,9,1,5};
    sort(arr.begin(),arr.end(),greater<int>()); // For descending order
    sort(arr.begin(),arr.end()); // For ascending order
    cout<<"Sorted Array:";
    for(int i:arr)
    {
        cout<<i<<" ";
    }
    return 0;
}