
//aman kumar jha
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res=0,n=prices.size(),minprice=INT_MAX;
        for(int i=0;i<n;i++)
        {
            res=max(res,prices[i]-minprice);
            minprice=min(minprice,prices[i]);
        }
        return res;
    }
};
