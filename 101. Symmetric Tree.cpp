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
public:
    bool mirror(TreeNode *root1,TreeNode *root2)
    {
        if(!root1&&!root2)
            return true;
        if((root1&&root2)&&(root1->val==root2->val))
            return mirror(root1->left,root2->right)&&mirror(root1->right,root2->left);
        return false;
    }
    bool isSymmetric(TreeNode* root)
    {
        return mirror(root,root);
    }
};
