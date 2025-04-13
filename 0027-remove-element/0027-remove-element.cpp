class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int ans = 0;
        vector<int> new_nums;
        for(int i : nums)
        {
            if(i!=val)
            {
                ans++;
                new_nums.push_back(i);
            }
        }
        for(int i = 0;i<new_nums.size();i++)
        {
            nums[i] = new_nums[i];
        }
        return ans;
    }
};