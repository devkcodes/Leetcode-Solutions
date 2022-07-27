class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>>cache(m+1,vector<int>(n+1));
        
        cache[m-1][n-1]=1;
        //start from bottom right. No. of ways to reach last cell is initially  1. 
        
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
                cache[i][j]+=cache[i][j+1]+cache[i+1][j]; //number of ways to reach each cell is (number of ways to reach cell to its right) + (no. of ways to reach cell below it)
        }
     
        
        return cache[0][0];
    }
};