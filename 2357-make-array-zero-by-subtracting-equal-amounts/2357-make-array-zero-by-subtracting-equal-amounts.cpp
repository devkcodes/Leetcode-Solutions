class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i : nums)
            if(i>0)
            mp[i]++;
        
        return mp.size();
    }
};