class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) 
    {
        
        //Creating adjacency List for storung the graph nodes
        unordered_map<int,vector<pair<int,int>>> adj;        
        for(auto node : flights )
        {
            adj[node[0]].push_back(make_pair(node[1],node[2]));
        }
        
        //Storing the values of cost from src to respective nodes
        vector<int> dist(n,INT_MAX);
        dist[src] = 0;
        
        queue<pair<int,int>> q;
        q.push(make_pair(src,0));
        int stops = 0;
        
        while(!q.empty() && stops<= k)
        {
            int q_s = q.size();
            
            while(q_s--)
            {
                pair<int,int> temp = q.front();
                q.pop();
                int node = temp.first;
                int d = temp.second; 
                
                if(!adj.count(node)) continue;
                       
                for (auto& [neighbour, price] : adj[node]) {
                    if (price + d >= dist[neighbour]) continue;
                    dist[neighbour] = price + d;
                    q.push({neighbour, dist[neighbour]});
                }
            }
            stops++;
        }
        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};