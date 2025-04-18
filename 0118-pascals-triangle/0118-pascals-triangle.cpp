class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> ans;
        vector<int> prev_row;
        for(int i = 0;i<numRows;i++)
        {
            vector<int> currRow(i+1,1);
            for(int j=1;j<i;j++)
            {
                currRow[j] = prev_row[j-1]+prev_row[j];
            }
            ans.push_back(currRow);
            prev_row = currRow;
        }
        return ans;
    }
};