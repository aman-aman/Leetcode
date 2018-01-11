//aman kumar jha
class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        string res="";
        res+=to_string(nums[0]);
        if(nums.size()==1)
            return res;
        if(nums.size()==2)
        {
            res+='/';
            res+=to_string(nums[1]);
            return res;
        }
        res+='/';
        res+='(';
        for(int i=1;i<nums.size();i++)
        {
            res+=to_string(nums[i]);
            res+='/';
        }
        res.pop_back();
        res+=')';
        return res;
    }
};
