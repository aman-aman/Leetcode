//aman kumar jha
class Solution {
public:
    bool ispalin(string s,int l,int r)
    {
        while(l<r)
        {
            if(s[l]!=s[r])
                return false;
            l++;r--;
        }
        return true;
    }
    bool validPalindrome(string s)
    {
        int n=s.length();
        int l=0,r=n-1;
        while(l<r)
        {
            if(s[l]!=s[r])
                return ispalin(s,l+1,r)||ispalin(s,l,r-1);
            l++;r--;
        }
        return true;
    }
};
