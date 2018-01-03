//aman kumar jha
class Solution {
public:
    string largestNumber(vector<int>& nums)
    {
        auto com=[&](string a,string b){ return a+b>b+a;};
        vector<string> s;
        for(int i=0;i<nums.size();i++)
            s.push_back(to_string(nums[i]));

        sort(s.begin(),s.end(),com);
        string res;
        for(int i=0;i<s.size();i++)
            res+=s[i];

        if(res[0]=='0')
            return "0";
        return res;
    }
};
