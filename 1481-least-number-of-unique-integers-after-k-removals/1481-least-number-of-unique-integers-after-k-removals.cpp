class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) 
    {
        unordered_map<int,int> mpp;
        for(int i=0;i<arr.size();i++)
            mpp[arr[i]]++;
        
       vector<int> freq;
        for(auto i: mpp)
        {
            freq.push_back(i.second);
        }
        
        sort(freq.begin(),freq.end());
        
        int elem_removed = 0;
        for(int i=0;i<freq.size();i++)
        {
            elem_removed+=freq[i];
            
            if(elem_removed > k)
            {
                return freq.size()-i;
            }
        }
        return 0;
    }
};