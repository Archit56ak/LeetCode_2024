class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
//         vector<int> counts(2,0);
//         for(int s : students)
//             counts[s]++;
        
//         int ans = sandwiches.size();
//         for(int s : sandwiches)
//         {
//             if(counts[s]==0) break;
//             else if(ans==0) break;
            
//             counts[s]--;
//             ans--;
//         }
        
//         return ans;
        
        queue<int> S;
        for(int s : students)
            S.push(s);
        
        int ans = 0;
        int i= 0 ;
        while(!S.empty() && ans!=S.size())
        {
            if(S.front()==sandwiches[i])
            {
                S.pop();
                i++;
                ans = 0;
            }
            else
            {
                S.push(S.front());
                S.pop();
                ans++;
            }
        }
        
        return S.size();
    }
};