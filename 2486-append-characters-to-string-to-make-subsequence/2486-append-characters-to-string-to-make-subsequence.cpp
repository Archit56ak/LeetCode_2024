class Solution {
public:
    int appendCharacters(string s, string t) 
    {
        int j = 0,i=0;
        int max_len=0;
        while(i<s.length())
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
        return t.length()-j;
    }
};