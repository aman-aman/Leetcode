//aman kumar jha
class Solution {
public:
    int romanToInt(string s)
    {
        map<char,int> t={
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000}
        };
        int n=s.length();
        int sum=t[s[n-1]];
        for(int i=n-2;i>=0;i--)
        {
            if(t[s[i]]<t[s[i+1]])
                sum-=t[s[i]];
            else
                sum+=t[s[i]];
        }
        return sum;
    }
};
