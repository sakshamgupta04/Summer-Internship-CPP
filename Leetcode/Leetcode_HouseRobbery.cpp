class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n==0)
            return 0;
        if (n==1)
            return nums[0];
        if (n==2)
            return max(nums[0], nums[1]);
        vector<int> arr(n);
        arr[0]=nums[0];
        arr[1]=max(nums[0], nums[1]);
        for (int i=2;i<n;i++) 
        {
            arr[i]=max(arr[i-1],arr[i-2]+nums[i]);
        }
        return arr[n-1];
    }
};