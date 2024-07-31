class Solution 
{
public:
 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
 {
    vector<int> v;
    for(auto i: nums1)
    {
        int j=0;
        for( ;j<nums2.size();j++)
        {
            if(i==nums2[j])
            break;
        }
        j=j+1;
        int f=1;
        for( ;j<nums2.size();j++)
        {
            if(nums2[j]>i) 
            {
                v.push_back(nums2[j]);
                f=0;
                break;
            }
        }
        if(f==1)
        v.push_back(-1);
    }
    return v;
 }
};