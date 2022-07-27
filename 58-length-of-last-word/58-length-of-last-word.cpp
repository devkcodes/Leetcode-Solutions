class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans = 0; int i;
        for( i=s.length()-1;i>0;i--)
            if(s[i]!=' ')
                break;
        
        for(int j=i;j>=0;j--)
            if(s[j]!=' ')
                ans++;
        else break;
        
        return ans;

                
    }
};