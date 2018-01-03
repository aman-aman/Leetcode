//aman kumar jha
class Solution {
public:
    string reverseWords(string s)
    {
        //reverse(s.begin(),s.end());
        string ans;
        int j;
        for(int i=0;i<s.length();i++)
        {
            int l=0;
            for(j=i;j<s.length()&&s[j]!=' ';j++)
                l++;
            string temp=s.substr(i,l);
           reverse(temp.begin(),temp.end());
           temp.push_back(' ');
           ans.append(temp);
           temp.clear();
           i=j;
        }
        ans.pop_back();
        return ans;
    }
};
