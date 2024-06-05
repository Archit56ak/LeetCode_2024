class Solution {
public:
    vector<string> commonChars(vector<string>& words) 
    {
        vector<string> ans;
        
        for(char ch = 'a' ; ch<='z';ch++)
        {
            int min_cnt = INT_MAX;
            for(string s : words)
            {
                int cnt = 0;
                 for(char c : s)
                 {
                     if(c == ch)
                         cnt++;
                 }  
                min_cnt = min(cnt,min_cnt);
            }
            
            string temp = "";
            temp+=ch;
            for(int i=0;i<min_cnt;i++)
            {
                ans.push_back(temp);
            }
        }
        
        return ans;
    }
};