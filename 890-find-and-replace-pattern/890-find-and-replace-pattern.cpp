class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        
        vector<int>map(27,0);
        int s = p.length();
        
        string a=""; int counter=0;
        for(auto i : p)
        {
            if(map[i-'a']==0)
            {
                counter++;
                map[i-'a']=counter;
                a+=counter+48;
            }
            
             else 
               {
                   
                   a+=map[i-'a']+48;
               }
        }
        
        
        cout<<a<<endl;
            
        
        vector<string>ans;
        
        
        for(auto str : words)
        {
            string b="";int count = 0;
            vector<int>map2(27,0);

           for(auto i : str)
        {
            if(map2[i-'a']==0)
            {
                count++;
                map2[i-'a']=count;
                b+=count+48;
            }
               else 
               {
                   b+=map2[i-'a']+48;
               }
            
            
        }
            
            if(a==b)
                ans.push_back(str);
            
            cout<<b<<endl;
            
        }
        
        return ans;
    }
};