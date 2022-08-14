class Solution {
public:
    void dfs(vector<vector<int>> &graph,int i,int j,vector<vector<int>> &ans){
        for(auto &x:graph[j]){
            if(ans[x].empty() || ans[x].back()!=i){
                ans[x].push_back(i); // push ans into array
                dfs(graph,i,x,ans); //continue for other elements
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> ans(n),graph(n);
        for(auto &v:edges){
            graph[v[0]].push_back(v[1]); //creating  graph
        }
        for(int i=0;i<n;i++){
            dfs(graph,i,i,ans);
        }
        return ans;
    }
};