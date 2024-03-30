/*
Number of Subarray with K distinct elements  =
  Number of Subarrays with atmost K distinct Elements 
- Number of Subarrays with atmost (K-1) Distinct Elements
*/

class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) 
    {
        int max_k = SubArrayWithAtmostK(nums,k);
        int reduced_max_k = SubArrayWithAtmostK(nums,k-1);
        return (max_k - reduced_max_k);
    }
    
    int SubArrayWithAtmostK(vector<int> nums, int k)
    {
        unordered_map<int,int> mpp;
        int ans = 0;
        int left=0,right=0;
        while(right<nums.size())
        {
            mpp[nums[right]]++;
            while(mpp.size()>k)
            {
                mpp[nums[left]]--;
                if(mpp[nums[left]]==0) mpp.erase(nums[left]);
                left++;
            }
            ans += right-left+1;
            right++;
        }
        return ans;
    }
};