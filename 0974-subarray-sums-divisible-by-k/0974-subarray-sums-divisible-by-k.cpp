class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) 
    {
       int n  =nums.size();
        int prefixmod = 0, result = 0;
        
        vector<int> modGroups(k);
        modGroups[0]=1;
        for(int num : nums)
        {
            prefixmod = (prefixmod + num%k + k) % k;
            result += modGroups[prefixmod];
            modGroups[prefixmod]++;
        }
        
        return result;
    }
};