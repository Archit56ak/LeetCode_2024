class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int s_len = s.length();
        int t_len = t.length();
        int ans = 0;
        int j = 0,i=0;
        int max_len=0;
        while(i<s_len)
        {
            if(s[i]==t[j])
            {
                max_len++;
                j++;
            }
            else
                max_len=0;
            
            i++;
        }
        return t_len-j;
    }
};