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
    set<int> vec;
public:
    void getelement(TreeNode *root)
    {
        if(!root)
            return ;
        if(root->left)
            getelement(root->left);
        vec.insert(root->val);
        if(root->right)
            getelement(root->right);
    }
    int findSecondMinimumValue(TreeNode* root)
    {
        getelement(root);
        int c=2,ans;
        if(vec.size()>=2)
        {
            for(set<int>::iterator it=vec.begin();it!=vec.end()&&c--;it++)
            {
                ans=*it;
            }
        }
        else
            ans=-1;
        return ans;
    }

};
