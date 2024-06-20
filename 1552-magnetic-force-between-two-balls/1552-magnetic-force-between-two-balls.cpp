class Solution {
    private:
    bool canWePlace(const vector<int>& arr, int dist, int balls) {
        int countBalls = 1;
        int lastPlaced = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] - lastPlaced >= dist) {
                countBalls++;
                lastPlaced = arr[i];
            }
            if (countBalls >= balls) {
                return true;
            }
        }
        return false;
    }

public:
    int maxDistance(vector<int>& position, int m) 
    {
        int n = position.size();
        sort(position.begin(),position.end());
        int max_dist = 1;
       int lo = 0;
        int hi = (position[n-1]-1)/(m-1);
        while(lo<=hi)
        {
            int mid = lo+(hi-lo)/2;
            if(canWePlace(position,mid,m))
            {
                max_dist = mid;
                lo = mid+1;
            }
            else
            {
                hi = mid-1;
            }
        }
        return max_dist;
    }
};

