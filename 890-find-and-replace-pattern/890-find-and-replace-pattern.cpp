class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string p) {
        
        vector<int>map(27,0); //declaring map to store occurance of characters of p
        vector<string>ans;
        int s = p.length();
        
        string a=""; int counter=0;
        for(auto i : p)// for every char in p
        {
            if(map[i-'a']==0)//if it has occured first time
            {
                counter++;//assign it a new number
                map[i-'a']=counter;//update the number in the map
                a+=counter+48;//add corresponding number to resulting string 'a'
                //+48 converts number 1 to character '1' so that it can be added to the string
            }
            else 
              a+=map[i-'a']+48;//if already present then add corresponding number to resulting string 'a'
        }
     
        for(auto str : words)//for every word in words, repeat the same procedure and check if resulting string 'b' is equal to 'a', if it is, then add the word to ans vector
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
                   b+=map2[i-'a']+48;
                   
            }
            
            if(a==b)
                ans.push_back(str);
            
        }
        
        return ans;
    }
};