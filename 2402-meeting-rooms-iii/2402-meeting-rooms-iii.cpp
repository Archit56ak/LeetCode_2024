class Solution {
public:
    int mostBooked(int n, vector<vector<int>>& meetings) 
    {
        int ans = 0;
        sort(meetings.begin(),meetings.end());
        vector<long long> availabilitytime(n,0);
        // priority_queue<int,vector<int>,greater<int>> free_rooms ;
        // priority_queue<int,vector<int>,greater<int>> end_times ;
        vector<int> freq(n,0);
        for(auto meet : meetings)
        {
            int start = meet[0],end = meet[1];
            bool availableroom = false;
            long long mintime = LLONG_MAX;
            int mintimeroom = 0;
            for(int i=0;i<n;i++)
            {
                if(availabilitytime[i] <= start)
                {
                    availableroom = true;
                    freq[i]++;
                    availabilitytime[i] = end;
                    break;
                }
                
                if(mintime > availabilitytime[i])
                {
                    mintime = availabilitytime[i];
                    mintimeroom = i;
                }
            }
            
            if(!availableroom)
            {
                availabilitytime[mintimeroom] += end-start;
                freq[mintimeroom]++;
            }
        }
        
        int maxFreq = 0;
        for(int i=0;i<n;i++)
        {
            if(freq[i] > maxFreq)
            {
                ans = i;
                maxFreq = freq[i];
            }
        }
        return ans;
    }
};