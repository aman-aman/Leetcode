//aman kumar jha
class Solution
{
public:
    void wiggleSort(vector<int>& nums)
    {
       vector<int> res;
       vector<int> s1,s2;
       sort(nums.begin(),nums.end(),greater<int>());
       for(int i=0;i<nums.size();i++)
       {
           if(i<nums.size()/2)
               s2.push_back(nums[i]);
           else
               s1.push_back(nums[i]);
       }
        int l=0,m=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==1)
                res.push_back(s2[l++]);
            else
                res.push_back(s1[m++]);
        }
        nums.clear();
        for(auto x: res)
            nums.push_back(x);

    }
};
