class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ans(n,0);
        for(int i=0;i<n;i++)
        {
          int val = pow(nums[i],2);
            ans[i] = val;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};