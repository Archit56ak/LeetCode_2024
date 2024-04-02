class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {
        vector<int> IndexS(200,0);
        vector<int> IndexT(200,0);
        
        for(int i=0;i<s.length();i++)
        {
            if(IndexS[s[i]] != IndexT[t[i]])
                return false;
            
            IndexS[s[i]] = i+1;
            IndexT[t[i]] = i+1;
        }
        
        return true;
    }
};