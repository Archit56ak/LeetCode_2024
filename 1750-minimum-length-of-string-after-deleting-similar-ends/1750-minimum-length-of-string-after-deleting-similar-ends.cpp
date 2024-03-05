class Solution {
public:
    int minimumLength(string s) {
    int n= s.length();
    int start = 0;
    int end = n-1;
        
       while(start<end && s[start] == s[end])
       {
          char c = s[start];
           while(start <=end && s[start] == c)
               start++;
           
           while(end > start && s[end]==c)
               end--;
       }
        
        return end-start+1;
    }
};