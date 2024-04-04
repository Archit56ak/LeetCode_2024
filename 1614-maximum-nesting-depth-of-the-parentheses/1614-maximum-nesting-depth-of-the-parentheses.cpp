class Solution {
public:
    int maxDepth(string s) 
    {
        int max_d = 0;
        int temp = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
                temp++;
            else if(s[i]==')')
                temp--;
            max_d = max(max_d,temp);
        }
        
        return max_d;
    }
};