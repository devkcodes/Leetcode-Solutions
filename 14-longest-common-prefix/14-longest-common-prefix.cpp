class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(int i = 1; i < strs.size(); i++) {
            for(int j = 0; j < prefix.size(); j++) {
                if(prefix[j] != strs[i][j]) {
                    prefix = prefix.substr(0, j);
                    break;
                }
            }
        }
        
        return prefix;
    }
};