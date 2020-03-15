class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int maxelement=*max_element(nums.begin(),nums.end());
        vector<int> b(maxelement+1,0),res(maxelement+1,0);
        for(int i=0;i<nums.size();i++)
        {
            b[nums[i]]++;
        }
        int cnt=0;
        for(int i=0;i<b.size();i++)
        {
            if(b[i]!=0)
            {
                res[i]=cnt;
                cnt+=b[i];
            }
        }
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            ans[i]=res[nums[i]];
        }

        return ans;
    }
};
