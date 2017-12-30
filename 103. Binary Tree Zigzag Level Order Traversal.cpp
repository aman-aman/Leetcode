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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root)
    {
        vector<vector<int> >res;
        if(!root)
            return res;

        queue<TreeNode*> q;
        q.push(root);
        int l=1;
        while(!q.empty())
        {
            int s=q.size();
            vector<int> temp;
            while(s--)
            {
                TreeNode *node=q.front();
                q.pop();
                temp.push_back(node->val);
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
            }
            if(l%2==0)
                reverse(temp.begin(),temp.end());
            res.emplace_back(temp);
            l++;
            temp.clear();
        }
        return  res;

    }
};
