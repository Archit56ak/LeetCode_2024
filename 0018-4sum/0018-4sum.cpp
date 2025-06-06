class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        vector<vector<int>> ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        set<vector<int>> s;
        for(int i = 0;i<n-3;i++)
        {
            for(int j = i+1;j<n-2;j++)
            {
                long long newtgt = (long long)target - (long long)nums[i] - (long long)nums[j];
                int low = j+1, high = n-1;
                while(low<high)
                {
                    if(nums[low]+nums[high] < newtgt) low++;
                    else if(nums[low]+nums[high] > newtgt) high--;
                    else
                    {
                        s.insert({nums[i],nums[j],nums[low],nums[high]});
                        low++;
                        high--;
                    }
                }
            }
        }
        for(auto it : s)
        {
            ans.push_back(it);
        }
        return ans;
    }
};