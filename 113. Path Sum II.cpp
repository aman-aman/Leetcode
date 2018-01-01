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


    vector<vector<int>> pathSum(TreeNode* root, int sum)
    {
        vector<vector<int> >vec;
        vector<int> v;
        getsum(root,sum,v,vec);
        return vec;
    }
    private:
    void getsum(TreeNode *root,int sum,vector<int> &v,vector<vector<int> > &vec)
    {
        if(root==NULL)
            return ;

        v.push_back(root->val);
        if(!(root->left)&&!(root->right)&& root->val==sum)
            vec.push_back(v);

        getsum(root->left,sum-root->val,v,vec);
        getsum(root->right,sum-root->val,v,vec);
        v.pop_back();
    }
};
