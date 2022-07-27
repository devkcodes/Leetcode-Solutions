class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n = triangle.size()-1;
        
        
        
        for(int i=n-1;i>=0;i--)
        {
            int j=0;
            while(j<i+1)
            {
                triangle[i][j]+=min(triangle[i+1][j+1],triangle[i+1][j]);
                j++;
            }
            
        }
        
        
        return triangle[0][0];
    }
};