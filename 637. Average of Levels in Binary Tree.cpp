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
    vector<double> averageOfLevels(TreeNode* root)
    {
        vector<double> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            int s=q.size();
            int n=s;
            double sum=0;
            while(s--)
            {
                TreeNode *node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            res.push_back((double(sum/n)));
        }
        return res;
    }
};
