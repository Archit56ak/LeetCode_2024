class Solution {
public:
    //Using Recurrsion
    int solveRec(vector<int> &coins,int amount)
    {
        if(amount == 0)
            return 0;
        if(amount<0)
            return INT_MAX;
        
        int mini = INT_MAX;
        for(int i=0;i<coins.size();i++)
        {
            int ans = solveRec(coins,amount-coins[i]);
            if(ans!=INT_MAX)
                mini = min(mini,1+ans);
        }
        return mini;
    }
    
    //Using Memoisation
    int solveMem(vector<int> &coins,int amount,vector<int> &dp)
    {
        if(amount==0)
            return 0;
        if(amount<0)
            return INT_MAX;
        
        if(dp[amount]!=-1)
            return dp[amount];
        
        int min_val = INT_MAX;
        for(int  i=0;i<coins.size();i++)
        {
            int ans = solveRec(coins,amount-coins[i]);
            if(ans!=INT_MAX)
                min_val = min(min_val,1+ans);
        }
        dp[amount] = min_val;
        return min_val;
    }
    
    int solveTab(vector<int> &coins,int amount)
    {
        vector<int> dp(amount+1,INT_MAX);
        dp[0] = 0;
        
        for(int i=1;i<=amount;i++)
        {
            // Trying to  solve for every amount from 1 to amount
            for(int j=0;j<coins.size();j++)
            {
                if(i-coins[j] >=0 && dp[i-coins[j]]!=INT_MAX)
                dp[i] = min(dp[i],1+dp[i-coins[j]]);
            }
        }
        if(dp[amount]==INT_MAX)
            return -1;
        return dp[amount]; 
    }
    int coinChange(vector<int>& coins, int amount) 
    {
        //Recurrsion given TLE
        //Memoisation:- RUntime Error
// int n = coins.size();    
//         vector<int> dp(amount+1,-1);
//         for(int i=0;i<n;i++)
//         {        
//             dp[coins[i]] = 1;
//         }
//         int min_val = solveMem(coins,amount,dp);
        
        //Tabulation
        int min_val = solveTab(coins,amount);
        if(min_val == INT_MAX)
            return -1;
        else
            return min_val;
    }
};