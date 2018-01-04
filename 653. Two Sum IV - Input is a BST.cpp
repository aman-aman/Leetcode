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
    bool findTarget(TreeNode* root, int k)
    {
        vector<int> vec;
         stack< TreeNode * > st;
        st.push(root);
        while(!st.empty())
        {
            int s=st.size();
            while(s--)
            {
                TreeNode* node=st.top();
                st.pop();
                vec.push_back(node->val);
                if(node->left)
                    st.push(node->left);
                if(node->right)
                    st.push(node->right);
            }
        }
        sort(vec.begin(),vec.end());
        int l=0,h=vec.size()-1;
        while(l<h)
        {
            if(vec[l]+vec[h]==k)
                return true;
            if(vec[l]+vec[h]>k)
                h--;
            else
                l++;
        }
        return false;
    }
};
