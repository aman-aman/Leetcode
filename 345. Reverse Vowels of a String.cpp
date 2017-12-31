//aman kumar jha
class Solution {
public:
    bool vowel(char ch)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            return true;
        return false;
    }
    string reverseVowels(string s)
    {
        int l=0;
        int r=s.length()-1;
        while(l<r)
        {
            if(vowel(s[l])&&vowel(s[r]))
            {
                swap(s[l],s[r]);
                {
                    l++;r--;
                    //cout<<s<<"\n";
                }
            }
            if(vowel(s[l])&&!vowel(s[r]))
            {
                r--;
            }
            if(!vowel(s[l])&&vowel(s[r]))
            {
                l++;
            }
            if(!vowel(s[l])&&!vowel(s[r]))
            {
                r--;l++;
            }
        }
        return s;

    }
};
