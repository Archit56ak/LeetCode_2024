class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_vol = 0;
        int i = 0;
        int j = height.size()-1;
        while(i<j)
        {
            int h = 0, l = 0;
            if(height[i]<=height[j]) {
                h = height[i];
                i++;
            }
            else {
                h = height[j];
                j--;
            }
            l = j-i+1;
            cout<<"Height : "<<h<<" Length : "<<l<<endl;
            int vol = h*l;
            max_vol = max(max_vol,vol);
        }
        return max_vol;
    }
};