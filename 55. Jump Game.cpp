//aman kumar jha
class Solution {
public:
    bool canJump(vector<int>& a)
    {
        int n=a.size();
        int maxreach=0;
        for(int i=0;i<=maxreach;i++)
        {
            maxreach=max(maxreach,i+a[i]);
            if(maxreach>=n-1)
                return true;
        }
        return false;

    }
};
