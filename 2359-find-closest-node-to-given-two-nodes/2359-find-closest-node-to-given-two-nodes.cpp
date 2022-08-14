class Solution {
public:
    void storePath(int i, int distance, vector<int> &edges, vector<int> &path)
    {
        if(i != -1 && path[i] == -1){
            path[i] = distance;
            storePath(edges[i],distance+1,edges,path);
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        int ans  = -1;
        int minDistance = INT_MAX;
        int n = edges.size();
        
        vector<int> path1(n,-1), path2(n,-1);
        
        storePath(node1,0,edges,path1);
        storePath(node2,0,edges,path2);
        
        for(int i=0;i<n;i++)
        {
            if(min(path1[i],path2[i]) >= 0 && max(path1[i],path2[i]) < minDistance)
            {
                minDistance = max(path1[i],path2[i]);
                ans = i;
            }
        }
        return ans;
    }
};