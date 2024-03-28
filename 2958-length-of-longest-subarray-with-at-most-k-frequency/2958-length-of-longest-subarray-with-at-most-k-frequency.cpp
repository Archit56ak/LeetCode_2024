class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) 
    {
        int ans = 0;
        unordered_map<int,int> mpp;
            
        int n = nums.size();
        
        int start = -1;
       for(int i= 0 ;i<n;i++)
       {
           mpp[nums[i]]++;
           while(mpp[nums[i]]>k)
           {
               start++;
               mpp[nums[start]]--;
           }
           
           ans = max(ans,i-start);
       }
        
        return ans;
    }
};