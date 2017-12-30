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
    int findBottomLeftValue(TreeNode* root)
     {
        int data=0;
        int maxlevel=0;
        dfs(root,1,maxlevel,data);
        return data;
    }
private:
    void dfs(TreeNode* node,int level,int& maxlevel,int& res)
    {
        if (!node)
            return;
        if (level>maxlevel)
        {
            res=node->val;
            maxlevel=level;
        }
        dfs(node->left,level+1,maxlevel,res);
        dfs(node->right,level+1,maxlevel,res);
    }
};
