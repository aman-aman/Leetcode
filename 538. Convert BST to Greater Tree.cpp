//aman kumar jha
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
private:
    int cursum=0;
public:
    void inorder(TreeNode *root)
    {
        if(!root)
            return ;
        if(root->right)
            inorder(root->right);
        root->val=(cursum+=root->val);
        if(root->left)
            inorder(root->left);
    }
    TreeNode* convertBST(TreeNode* root)
    {
        inorder(root);
        return root;
    }
};
