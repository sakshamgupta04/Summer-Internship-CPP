#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{ 
    vector <int> nums= {1,2,3,4};
    int n = nums.size();
    vector<int> output;
    for(int i=0; i<n; i++)
    {
        int product = 1;
        for(int j=0; j<n; j++)
        {
            if(i == j)
            continue;
            product *= nums[j];
        }
        output.push_back(product);
    }
    for(int i:output)
        {
            cout<<endl<<i;
        }
};