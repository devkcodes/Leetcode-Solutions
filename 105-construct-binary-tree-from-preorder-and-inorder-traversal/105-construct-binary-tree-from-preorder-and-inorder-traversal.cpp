int idx;
class Solution {
public:
    int searchInOrder( vector<int>& inorder,int st,int end,int x){
        for(int i=st;i<=end;i++)
            if(inorder[i]==x) {
                return i;
            }
        return -1;
    }
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int st,int end){
            if(st>end) return NULL;
            int curr = preorder[idx];
            int pos = searchInOrder(inorder,st,end,curr);
            idx++;
            TreeNode* node = new TreeNode(curr);
            node->left=solve(preorder,inorder,st,pos-1);
            node->right=solve(preorder,inorder,pos+1,end);
            return node;
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        idx=0;
        TreeNode *head = solve(preorder,inorder,0,inorder.size()-1);
        return head;
        
    }
};