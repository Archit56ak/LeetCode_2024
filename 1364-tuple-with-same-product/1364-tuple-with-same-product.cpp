class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int numsLen = nums.size();
        sort(nums.begin(),nums.end());

        int totalTuples = 0;
        for(int aIdx = 0; aIdx < numsLen ; aIdx++)
        {
            for(int bIdx = numsLen-1 ; bIdx >= aIdx ; bIdx--)
            {
                int product = nums[aIdx] * nums[bIdx];
                unordered_set<int> possible_d_val;

                for(int cIdx = aIdx + 1;cIdx < bIdx ; cIdx++)
                {
                    if(product%nums[cIdx] == 0)
                    {
                        int dVal = product / nums[cIdx];

                        if (possible_d_val.find(dVal) != possible_d_val.end())
                        {
                            totalTuples +=8;
                        }

                        possible_d_val.insert(nums[cIdx]);
                    }
                }
            }
        }

        return totalTuples;
    }
};