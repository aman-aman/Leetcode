//aman kumar jha
class Solution {
public:
    bool increasingTriplet(vector<int>& arr)
    {
        int c1=INT_MAX,c2=INT_MAX;
        for(auto x:arr)
        {
            if(c1>=x)
                c1=x;
            else if(c2>=x)
                c2=x;
            else
                return true;
        }
        return false;
    }
};
