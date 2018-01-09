//aman kumar jha
class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        if(nums.size()==0)
            return 0;

        priority_queue<int,vector<int> ,greater<int> >pq;
        set<int> s(nums.begin(),nums.end());
        for(auto c:s)
        {
                pq.push(c);
        }
        int c=1,res=1;
        int prev=pq.top();
        pq.pop();
        while(!pq.empty())
        {
            if(prev+1==pq.top())
            {
                c++;
                res=max(c,res);
            }
            else
                c=1;
            prev=pq.top();
            pq.pop();
        }
        return res;
    }
};
