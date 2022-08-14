class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        
        long long int m = size(roads), sum =0;
        
        //vector v has two columns, one for maping the occurances of nodes to their number and the other is just a copy of the name of nodes so that when we sort the occurances, we retain the name of node with them (which will be in the second column)
        
        vector<vector<int>>v(n,vector<int>(2));
        for(int i=0;i<n;i++)
            v[i][1]=i;
        
        for(int i=0;i<m;i++)
        {
            v[roads[i][0]][0]++;
            v[roads[i][1]][0]++;
        }
        
// taking example1,
        
//  vector v  {2,0}                {1, 4}
//            {3,1} ->  sort ->    {2, 0}
//            {4,2}                {2, 3}
//            {2,3}                {3, 1}
//            {1,4}                {4, 2}
        
        sort(v.begin(),v.end());
        
        vector<int>p(n); 
        
//now we map again, this time the occurance to their score from 1 to 5
        
        for(int i=0;i<n;i++)
            p[v[i][1]]=i+1;

//simply add the results from the roads array       
        for(int i=0;i<m;i++)
            sum+=p[roads[i][0]]+p[roads[i][1]];
        
        
        return sum;
    }
};