class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ans(n,0);
        transform(nums.begin(),nums.end(),ans.begin(),[](int n){return n*n;} );
        sort(ans.begin(),ans.end());
        return ans;
    }
};