//aman kumar jha
class Solution {
public:
    int thirdMax(vector<int>& nums)
    {
        set<int> s;
        for(int i=0;i<nums.size();i++)
            s.insert(nums[i]);

        priority_queue<int> pq;
        for(auto x: s)
            pq.push(x);
        if(pq.size()<3)
            return pq.top();
        else
        {
            int res,i=2;
            while(i--)
            {
                pq.pop();
            }
            res=pq.top();
            return res;
        }

    }
};
