class Solution {
public:
    bool isPowerOfTwo(int n) {
        bool flag = false;
        
        while(n>0)
        {
            if(n%2==0)
            {
                n=n/2;
                flag = true;
            }
            else if(n==1)
            {
                flag=true;
                break;
            }
            else if(n%2!=0)
            {
                flag=false;
                break;
            }
        }
        return flag;
    }
};