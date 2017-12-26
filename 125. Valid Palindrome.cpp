//aman kumar jha
class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.length();i++)
        {
            if((s[i]>=97&&s[i]<=122)||(s[i]>=65&&s[i]<=90)||(s[i]<=57&&s[i]>=48))
                str.push_back(tolower(s[i]));
        }
        string temp=str;
        reverse(temp.begin(),temp.end());
        //cout<<temp<<" "<<str<<"\n";
        for(int i=0;i<str.length();i++)
        {
            if(temp[i]!=str[i])
                return false;
        }
        //cout<<str<<"\n";
        return true;

    }
};
