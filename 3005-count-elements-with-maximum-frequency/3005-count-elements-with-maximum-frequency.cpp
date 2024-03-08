class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) 
    {
        int max_freq = INT_MIN;
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
         mpp[nums[i]]++;   
        }
        
        for(auto i : mpp)
        {
            if(i.second >= max_freq)
                max_freq = i.second;
        }
        int temp = 0;
         for(auto i : mpp)
        {
            if(i.second == max_freq)
                temp += i.second;
        }
        
        return temp;
    }
};