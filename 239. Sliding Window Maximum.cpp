//aman kumar jha
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k)
    {
        deque<int> dq;
        vector<int> res;
        int n=a.size();
        if(n==0)
            return res;
        for(int i=0;i<k;i++)
        {
            while(!dq.empty()&&a[i]>=a[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }

        for(int i=k;i<n;i++)
        {
            res.push_back(a[dq.front()]);
            while(!dq.empty()&&dq.front()<=i-k)
                dq.pop_front();

            while(!dq.empty()&&a[i]>=a[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        res.push_back(a[dq.front()]);

        return res;

    }
};
