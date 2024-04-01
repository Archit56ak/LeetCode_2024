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
// class Solution {
// public:
//     int lengthOfLastWord(string s) {
//         int len=0; 
//         int i = 0;
//         i = s.length()-1;
//         if(i == 0) return s[i]==' ' ? 0 : 1;
//         while(s[i]==' ' && i>=0)
//         {
//             i--;
//         }
//         while(s[i]!=' '&& (i--)>=0)
//         {
//             len++;           
//         }
//         return (len);
//     }
// };