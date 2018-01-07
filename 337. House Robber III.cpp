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
    int getval(TreeNode *root,int& l,int& r)
    {
       if(!root)
           return 0;
        int ll=0,lr=0,rl=0,rr=0;
        l=getval(root->left,ll,lr);
        r=getval(root->right,rl,rr);
        return max(root->val+ll+lr+rl+rr,l+r);
    }
    int rob(TreeNode* root)
    {
        int l,r;
        return getval(root,l,r);
    }
};
