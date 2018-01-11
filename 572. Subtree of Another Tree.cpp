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
    bool identical(TreeNode *s,TreeNode *t)
    {
        if(!s&&!t)
            return 1;
        if(s&&t)
        {
            if((s->val==t->val)&&(identical(s->left,t->left))&&(identical(s->right,t->right)))
                return 1;
        }
        return 0;
    }
    bool isSubtree(TreeNode* s, TreeNode* t)
    {
        if(!s&&!t)
            return 1;
        if(!s||!t)
            return 0;
        if(identical(s,t))
            return 1;
        return(isSubtree(s->left,t)||isSubtree(s->right,t));

    }
};
