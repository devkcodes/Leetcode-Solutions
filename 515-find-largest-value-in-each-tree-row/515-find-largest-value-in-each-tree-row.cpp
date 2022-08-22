class Solution {
public:
    vector<int>ans;
    
    void helper(TreeNode* root, int i)
    {
        if(root==NULL)
            return;
        
        int n = size(ans)-1;
        if(n<i)
            ans.push_back(root->val);
        else
            ans[i]=max(ans[i],root->val);
        
        i++;
        helper(root->left,i);
        helper(root->right,i);
        
        
        return;
        
        
    }
    vector<int> largestValues(TreeNode* root) {
        int i=0;
        helper(root,i);
        
        return ans;
    }
};