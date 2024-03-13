class Solution {
public:
    int pivotInteger(int n) 
    {
        int TotalSum = ((n+1)*n)/2;
        for(int i = 1; i<= n ;i++)
        {
            int leftSum = (i*(i+1))/2;
            int rightSum = TotalSum - leftSum+i;
            if(leftSum == rightSum)
            {
                return i;
            }
        }        
        return -1;
    }
};