//aman kumar jha
class Solution {
public:
    bool containsDuplicate(vector<int>& nums)
    {
        //vector<int> cnt(1000001);
        map<int,int> cnt;
        for(int i=0;i<nums.size();i++)
            cnt[nums[i]]++;

        for(int i=0;i<nums.size();i++)
        {
            if(cnt[nums[i]]>1)
                return true;
        }
        return false;

    }
};
