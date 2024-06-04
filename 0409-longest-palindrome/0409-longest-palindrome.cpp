class Solution {
public:
    int longestPalindrome(string s) 
    {
//         unordered_map<char,int> mpp;
//         int ans = 0;
//         for(char i : s)
//         {
//             mpp[i]++;
//         }
//         int max_odd = 0;
        
//         for(auto i : mpp)
//         {
            
//             if(i.second%2==0)
//             {
//                 ans+=(i.second);
//             }
//             else if(i.second%2!=0)
//             {
//                 max_odd = max(max_odd,i.second);
//             }
//         }
//         ans+=max_odd;
//         return ans;
            unordered_map<char, int> hm;
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (hm.find(c) != hm.end()) {
                hm[c]++;
            } else {
                hm[c] = 1;
            }
        }

        int ans = 0;
        bool isFirstOdd = false;

        for (auto& pair : hm) {
            if (pair.second % 2 == 0) {
                ans += pair.second;
            } else {
                ans += pair.second;
                if (!isFirstOdd) {
                    isFirstOdd = true;
                } else {
                    ans -= 1;
                }
            }
        }

        return ans;
    }
};