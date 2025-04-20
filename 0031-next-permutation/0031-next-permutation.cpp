class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        // Firstly find the the first decreasing number.
        int i = nums.size()-1;
        while(i>0 && nums[i-1]>=nums[i])
        {
            i--;
        }

        // If you don't find the first decreasing element then i.e. the array is sorted in    descending order. So reverse the Array and return 
        if(i==0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }

        // Find the smallest numbers index from the right of the array.
        int j = nums.size()-1;
        while(j>=i && nums[j] <= nums[i-1])
        {
            j--;
        }

        swap(nums[i-1],nums[j]);
        reverse(nums.begin()+i,nums.end());
    }
};