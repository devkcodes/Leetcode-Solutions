class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(!root)
            return ans;
        q.push(root);
        while(!q.empty())
        {   vector<int>subAns;
            int sz = q.size();
            for(int i=0;i<sz;i++)
            {
                TreeNode* node = q.front();
                q.pop();
                subAns.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);

            }
         ans.push_back(subAns);
        }
        return ans;
    }
};