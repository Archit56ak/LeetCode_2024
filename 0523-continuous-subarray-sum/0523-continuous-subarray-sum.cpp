class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k)
    {
        unordered_map<int,int> mpp;
        int sum=0;
        mpp[0] = -1;
        int n = nums.size();
        for(int i = 0;i<n;i++)
        {
            sum+=nums[i];
            int val = sum%k;
            if(mpp.find(val)!=mpp.end())
            {
                if(i-mpp[val]>=2)
                    return true;
            }
            else
                mpp[val]=i;
        }
        return false;
    }
};