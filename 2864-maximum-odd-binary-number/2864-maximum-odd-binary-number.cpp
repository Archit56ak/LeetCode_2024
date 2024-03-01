class Solution {
public:
    string maximumOddBinaryNumber(string s) 
    {
        int one_cnt=0;
        int zero_cnt=0;
        for(int i=0;i<s.length();i++) 
        {
            if(s[i]=='1') one_cnt++;
        }
        
        string res=s;
        res[s.length()-1]='1';
        one_cnt--;
        for(int i=0;i<s.length()-1;i++)
        {
            if(one_cnt>0)
            {
                res[i]='1';
                one_cnt--;
            }  
            else
                res[i]='0';
        }
        
        cout<<res;
        return res;
        
    }
};