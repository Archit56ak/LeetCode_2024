#include<string.h>
class Solution {
public:
    string firstPalindrome(vector<string>& words)
    {
        string ans;
        for(int i=0;i<words.size();i++)
        {
            string temp = words[i];
            string rev;
            rev.assign(temp.rbegin(),temp.rend());
            if(rev==temp)
            {
                ans.assign(temp.begin(),temp.end());
                break;
            }
            
        }
       return ans; 
    }
};