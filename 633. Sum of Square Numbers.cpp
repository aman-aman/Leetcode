//aman kumar jha
class Solution {
public:
    bool judgeSquareSum(int c)
    {
        for(int i=0;i<=sqrt(c);i++) {
            int t=sqrt(c-i*i);
            if(t*t==c-i*i) return true;
        }
        return false;
    }
};



///Another Solution for same problem using Map
/*
/*map<int,int> mp;
        for(int i=0;i*i<=c;i++)
        {
            mp[i*i]=1;
            if(mp[c-i*i])
                return true;
        }
        return false;
*/
