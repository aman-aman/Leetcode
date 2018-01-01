//aman kumar jha
class Solution {
public:
    int findPairs(vector<int>& nums, int k)
    {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(a[j]-a[i]==target)
                    c++;
                if(a[j]-a[i]>target)
                    break;
            }
        }
        return c;

    }
};

