//aman kumar jha
class Solution {
public:
    int modpow(int x,int y,int mod)
    {
        int res = 1;
        x=x%mod;
        while (y>0)
        {
            if (y&1)
                res = (res*x)%mod;

            y=y>>1;
            x=(x*x)%mod;
        }
        return res;
    }
    int superPow(int x, vector<int>& b)
    {
        int mod=1337;
        //for(int i=1;i<b.size();i++)y=y*10+b[i];
        int y=0;
        for (int i:b)y=(y*10+i)%1140;
        if (y==0)y+=1140;

        return modpow(x,y,mod);
    }
};
