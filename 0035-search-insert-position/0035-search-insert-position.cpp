class Solution {
public:
    int searchInsert(vector<int>& nums, int val) 
    {
       int left = 0;
       int right = nums.size()-1;
       while(left <= right)
       {
        int mid = left + (right-left)/2;
        if(nums[mid]==val)
        {
            return mid;
        }
        else if(nums[mid] > val)
        {
            right = mid-1;
        }
        else left = mid + 1;

       }
       return left;
    }
};