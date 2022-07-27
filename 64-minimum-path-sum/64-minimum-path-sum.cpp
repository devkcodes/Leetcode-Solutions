class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        

        for(int i=1;i<m;i++)
            grid[0][i]+=grid[0][i-1];
        
        for(int i=1;i<n;i++)
            grid[i][0]+=grid[i-1][0];
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                int top = grid[i-1][j];
                int left = grid[i][j-1];
                grid[i][j]+=min(top,left);
                
            }
        }

        return grid[n-1][m-1];
        
        
    }
};