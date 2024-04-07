class Solution {
public:
    string minRemoveToMakeValid(string s)
    {
        int open_cnt = 0;
        vector<char> arr(s.begin(),s.end());
        
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]=='(')
                open_cnt++;
            else if(arr[i]==')')
            {
                if(open_cnt==0)
                    arr[i] = '*';
                else 
                    open_cnt--;
            }
        }
        
        for(int i = arr.size()-1;i>=0;i--)
        {
            if(open_cnt>0 && arr[i] == '(')
            {
                 arr[i] = '*';
                open_cnt--;
            } 
        }
        string result = "";
        for(char c : arr)
        {
            if(c!='*')
                result+=c;
        }
        
        return result;
    }
};