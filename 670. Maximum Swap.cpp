//aman kumar jha
class Solution {
public:
    int maximumSwap(int num)
    {
        stringstream ss;
        ss<<num;
        string s=ss.str();
        vector<int> bucket(10);
       for(int i=0;i<s.length();i++)
       {
           bucket[s[i]-'0']=i;
        }
        for(int i=0;i<s.length();i++)
        {
            for(int j=9;j>s[i]-'0';j--)
            {
                if(bucket[j]>i)
                {
                    swap(s[i],s[bucket[j]]);
                    return stoi(s);
                }
            }
        }

        return stoi(s);

    }
};
