class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int ans = 0;
        bool flag = false;
        int n = s.length();
        for(int i = n-1 ;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                flag = true;
                ans++;
            }
            else if(flag)
                break;
        }
        return ans;
    }
};