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

    vector<int> rightSideView(TreeNode* root)
    {
        vector<int> res;
        if(!root)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        int right;
        while(!q.empty())
        {
            int size=q.size();
            while(size--)
            {
                TreeNode *node=q.front();
                q.pop();
                right=node->val;
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);

            }
            res.push_back(right);
        }
        return res;
    }
};
