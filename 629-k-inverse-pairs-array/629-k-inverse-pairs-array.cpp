

class Solution {
public:
    int mod = (int)(1e9 + 7);
    
    int f(int n, int k, vector<vector<int>>& dp){
        //base case
        if(k<=0) return k==0;
        if(n<=0) return 0;
        
        //memoization
        if(dp[n][k]!=-1) return dp[n][k];
        
        
        dp[n][k] = (f(n-1, k, dp) + f(n, k-1, dp))%mod;
        
        return dp[n][k] = (dp[n][k] - f(n-1, k-n, dp) + mod)%mod;
    }
    int kInversePairs(int n, int k) {
        //Initialization of dp
        vector<vector<int>> dp(n+1,vector<int>(k+1,-1));
        return f(n,k,dp);
    }
};