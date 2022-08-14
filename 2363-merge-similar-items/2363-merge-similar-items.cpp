class Solution {
public:
vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) 
    {
        map<int,int> m;//declare map
        vector<vector<int>> ans;

    
        for(int i=0;i<items1.size();i++) //put every item of item1 in map
            m[items1[i][0]]=items1[i][1];
        
        for(int i=0;i<items2.size();i++)//for every element in item 2
            if(m.find(items2[i][0])!=m.end())//if it is already present in item1
                m[items2[i][0]]+=items2[i][1];//simply add it to existing value
            else
                m[items2[i][0]]=items2[i][1];//else add as new value
            
        
        for(auto it : m)
            ans.push_back({it.first,it.second});//simply print the map
        
        return ans;
        
    }
};