class Solution {
public:
    
    void dfs(int s, vector<int> adj[], vector<int> &vis, long long &count)
    {
        vis[s]=1;
        count++;
        
        for(auto i:adj[s])
        {
            if(vis[i]==0)
            dfs(i,adj,vis,count);
        }
    }
    
    long long countPairs(int n, vector<vector<int>>& edges) {
        
        int len=edges.size();
        
        vector<int> adj[n];
        for(auto i:edges)
        {
            int x=i[0];
            int y=i[1];
            
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        long long res=0;
        vector<int> vis(n,0);
        for(int i=0;i<n;i++)
        {
            if(vis[i]==0)
            {
                long long count=0;
                dfs(i,adj,vis,count);
                
                long long unreachable=n-count;
                
                long long z=count*unreachable;
                res+=(z);
            }
        }
        
        return res/2;
        
        
    }
};