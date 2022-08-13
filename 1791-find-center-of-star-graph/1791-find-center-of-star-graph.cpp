class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>mp;
        int ans = 0;
        
        for(int i=0;i<2;i++)
            for(int j=0;j<2;j++)
                mp[edges[i][j]]++;
        
        for(auto x :mp)
            if(x.second>1)
                ans = x.first;
       
        
        return ans;
    }
};