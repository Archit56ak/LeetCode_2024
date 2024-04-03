class Solution {
public:
    int n;
    int m;

    bool exist(vector<vector<char>>& board, string word) 
    {
        bool ans = false;
         n = board[0].size();
         m = board.size();
       
        function<bool (int ,int ,int )> backtrack = [&](int i,int j,int k)     
        {
            if(k==word.length())
                return true;
            
            else if(i>=m || i<0 || j>=n || j<0 || board[i][j] != word[k])
                return false;
            
             char temp = board[i][j];
            board[i][j] = '\0';
            
            if (backtrack(i + 1, j, k + 1) || backtrack(i - 1, j, k + 1) || 
                backtrack(i, j + 1, k + 1) || backtrack(i, j - 1, k + 1))
            {
                return true;
            }
            
            board[i][j] = temp; 
            return false;
        };
       
        //To store the index of the current char in Word.
       int W_index = 0;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(backtrack(i,j,0))
                    return true;
            }
        }
       return ans;
    }
};