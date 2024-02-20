class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        // Method 1
        // sort(nums.begin(),nums.end());
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(i!=nums[i])
        //         return i;
        // }
        // return nums.size();

        //Method 2
        int n = nums.size();
        vector<int>v(n+1,-1);
        for(int i =0;i<nums.size();i++){
            v[nums[i]] = nums[i];
        }
        for(int i =0;i<v.size();i++){
            if(v[i]==-1)return i;
        }

        //Method 3
        // int sum = 0;
        // for(int i=0;i<=nums.size();i++)
        //     sum+=i;
        // for(int i=0;i<nums.size();i++)
        //     sum-=nums[i];
        // return sum;
        return 0;
    }
};