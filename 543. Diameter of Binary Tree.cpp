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
class Solution {
public:
    int height(TreeNode *root)
    {
        if(!root)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int diameter(TreeNode *root)
    {
        if(!root)
            return 0;
        int lh=height(root->left);
        int rh=height(root->right);
        int ldia=diameter(root->left);
        int rdia=diameter(root->right);
        return max(max(ldia,rdia),lh+rh);
    }
    int diameterOfBinaryTree(TreeNode* root)
    {
     return diameter(root);
    }
};
