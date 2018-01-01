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
     //int sum=0;
    int getsum(TreeNode *root,int sum)
    {
        if(root==NULL)
            return 0;
        if(!root->left&&!root->right)
            return (sum*10+root->val);

        return getsum(root->left,sum*10+root->val)+getsum(root->right,sum*10+root->val);

    }
    int sumNumbers(TreeNode* root)
    {
        int sum=getsum(root,0);
        return sum;
    }
};
