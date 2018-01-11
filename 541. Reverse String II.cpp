//aman kumar jha
class Solution {
public:
    string reverseStr(string s, int k)
    {
        int i=0;
        string res;
        int sign=0;
        while(i<s.length())
        {
            string temp=s.substr(i,k);
            if(sign%2==0)
                reverse(temp.begin(),temp.end());
            res+=temp;
            i=i+k;
            sign++;
        }
        return res;
    }
};
