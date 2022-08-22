class Solution {
public:
    vector<int>ans;//ans vector, storing the highest value at ith level at index i
    
    void helper(TreeNode* root, int i)
    {
        if(root==NULL)//base case
            return;
        int n = size(ans)-1;
        if(n<i)//if no value for ith level is present,
            ans.push_back(root->val); //add value to ith level
        else
            ans[i]=max(ans[i],root->val);//else update the max of old and curr value
        
        i++; //increase level count
        helper(root->left,i); //process left and right subtree
        helper(root->right,i);
        
        
        return;
        
        
    }
    vector<int> largestValues(TreeNode* root) {
        int i=0;
        helper(root,i);
        
        return ans;
    }
};