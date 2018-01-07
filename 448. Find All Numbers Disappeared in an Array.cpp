//aman kumar jha
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums)
    {
        vector<int> res;
        int n=nums.size();
        set<int> s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);

        int x=1;
        while(x<=n)
        {
            if(s.find(x)==s.end())
            {
                res.push_back(x);
            }
            x++;
        }
        return res;

    }
};
