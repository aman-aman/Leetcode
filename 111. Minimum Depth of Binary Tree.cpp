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
    int mindep(TreeNode *root)
    {
        if(!root)
            return 0;

        if(!root->left&&!root->right)
            return 1;

        if(!root->left)
            return 1+mindep(root->right);

        if(!root->right)
            return 1+mindep(root->left);

        return 1+min(mindep(root->left),mindep(root->right));
    }
    int minDepth(TreeNode* root)
    {
        if(!root)
            return 0;

        return mindep(root);
    }

};
