class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& queries) 
    {
        int n = queries.size();
        vector<int> results;
        unordered_map<int,int> ColorMap, BallMap;
        for(vector<int> query : queries)
        {
            int ball_position = query[0];
            int ball_color = query[1];

            if(BallMap.find(ball_position) != BallMap.end())
            {
                int prevColor = BallMap[ball_position];
                ColorMap[prevColor]--;
                if(ColorMap[prevColor]==0) ColorMap.erase(prevColor); 
            }
            BallMap[ball_position] = ball_color;
            ColorMap[ball_color]++;
            results.push_back(ColorMap.size());
        }
        return results;
    }
};