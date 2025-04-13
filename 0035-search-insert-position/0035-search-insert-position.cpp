class Solution {
public:
    int searchInsert(vector<int>& nums, int val) 
    {
        if (val == nums[0]) return 0;
        if (val > nums[nums.size()-1]) return nums.size();
        for(int i = 1;i<nums.size();i++)
        {
            if(val == nums[i]) return i;
            else if(val > nums[i-1] && val < nums[i]) return i;
        }
        return 0;
    }
};