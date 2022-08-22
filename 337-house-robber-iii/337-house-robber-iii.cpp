class Solution {
public:
    pair<int,int> findMaxMoney (TreeNode* root) {
        if (!root) return {0, 0};
        int choose, not_choose;
        pair<int,int> left = findMaxMoney(root->left);
        pair<int,int> right = findMaxMoney(root->right);
        choose = root->val + left.second+right.second;
        not_choose = max(left.first, left.second) + 
            max(right.first, right.second);
        return {choose, not_choose};
    }
    int rob(TreeNode* root) {
        pair<int,int> maxValue = findMaxMoney(root);
        return max(maxValue.first, maxValue.second); 
    }
};