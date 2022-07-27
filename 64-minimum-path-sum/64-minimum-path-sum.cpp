class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        vector<vector<int>>dp(n,vector<int>(m));
        
        dp = grid;

        
        
        
        for(int i=1;i<m;i++)
            dp[0][i]+=dp[0][i-1];
        
        for(int i=1;i<n;i++)
            dp[i][0]+=dp[i-1][0];
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                int top = dp[i-1][j];
                int left = dp[i][j-1];
                dp[i][j]+=min(top,left);
                
            }
        }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                 cout<<dp[i][j]<<" ";
                
//             }
//             cout<<endl;
//         }
        return dp[n-1][m-1];
        
        
    }
};