class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) 
    {
       int totalCustomer = 0;
       int n = customers.size();
       
        for(int i = 0;i<n;i++)
        {
            totalCustomer += customers[i]*(1-grumpy[i]);
        }
        
        int maxSatisfied = 0;
        int tempSatisfied = 0;
        for(int i =0 ;i<minutes;i++)
        {
            tempSatisfied+=customers[i]*grumpy[i];
        }
        
        maxSatisfied = tempSatisfied;
        
        for(int i = minutes;i<n;i++)
        {
            tempSatisfied+=customers[i]*grumpy[i];
            
            tempSatisfied-= customers[i-minutes]*grumpy[i-minutes];
            maxSatisfied = max(tempSatisfied,maxSatisfied);
        }
        return totalCustomer+maxSatisfied;
    }
};