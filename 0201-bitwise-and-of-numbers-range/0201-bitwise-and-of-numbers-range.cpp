class Solution {
public:
    int rangeBitwiseAnd(int left, int right)
    {
        //Brute Force approach :- TLE
//         int res = left;
        
//         for(int i=left+1 ; i<=right;i++)
//         {
//             res = (res & i);
//         }
//         return res;
        
        // Right shift Operation
        
        int cnt = 0;
        while(left!=right)
        {
            left >>=1;
            right>>=1;
            cnt++;
        }
        
        return(left<<cnt);
    }
};