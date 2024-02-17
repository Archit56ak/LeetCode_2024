class Solution {
public:
    int furthestBuilding(vector<int>& height, int bricks, int ladders) {
        priority_queue<int> p;
    
        int i=0, diff =0; 
        for(i=0; i<height.size()-1; i++){ 
            
            diff = height[i+1]-height[i];
            
            if(diff <= 0){
                continue;
            }

            bricks -= diff; 
            p.push(diff); 
       
            if(bricks < 0){
                bricks += p.top(); 
                p.pop(); 
                ladders--;
            }

          
            if(ladders < 0) break;
        }
        
        
        return i;
    }
};