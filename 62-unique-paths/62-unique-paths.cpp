class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>>cache(m+1,vector<int>(n+1));
        cache[m-1][n-1]=1;
        
       
        for(int i=m-1;i>=0;i--)
        {
            for(int j=n-1;j>=0;j--)
                cache[i][j]+=cache[i][j+1]+cache[i+1][j];
        }
        
        
        for(int i=0;i<m+1;i++)
           { for(int j=0;j<n+1;j++)
                cout<<cache[i][j]<<" ";
            cout<<endl;}
        
        return cache[0][0];
    }
};