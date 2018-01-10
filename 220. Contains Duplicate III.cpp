//aman kumar jha
class Solution {
public:
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {

        set<long long int> s;
        for(int i=0;i<nums.size();i++)
        {
            if(i>k)
                s.erase((long long)nums[i-k-1]);
            auto pos=s.lower_bound((long long)nums[i]-t);
            if(pos!=s.end()&&*pos-(long long)nums[i]<=t)
                return true;

            s.insert((long long)nums[i]);
        }
        return false;
    }
};
