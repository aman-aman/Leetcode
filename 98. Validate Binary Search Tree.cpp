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

    bool isValidBST(TreeNode* root)
    {
        return bst(root,LONG_MIN,LONG_MAX);
    }
    private:
    bool bst(TreeNode *node,long min,long max)
    {
        if(!node)
            return true;
        if(node->val <= min|| node->val >= max)
            return false;
        return (bst(node->left,min,node->val)&&bst(node->right,node->val,max));
    }
};
