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
private:
    vector<int> vec;
public:
    void getelement(TreeNode *root)
    {
        if(!root)
            return ;
        if(root->left)
            getelement(root->left);
        vec.push_back(root->val);
        if(root->right)
            getelement(root->right);
    }
    int kthSmallest(TreeNode* root, int k)
    {

        getelement(root);
        //for(int i=0;i<vec.size();i++)cout<<vec[i]<<" ";
        return vec[k-1];
    }
};
