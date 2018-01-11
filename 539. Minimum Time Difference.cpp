//aman kumar jha
class Solution
{
public:
    int findMinDifference(vector<string>& time)
    {
        sort(time.begin(),time.end());
        int ans=INT_MAX;
        int n=time.size();
        for(int i=0;i<time.size();i++)
        {
            int diff=abs(finddiff(time[(i-1+n)%n],time[i]));
            diff=min(diff,1440-diff);
            ans=min(diff,ans);
        }
        return ans;
    }
private:
    int finddiff(string s1,string s2)
    {
        int h1=stoi(s1.substr(0,2));
        int m1=stoi(s1.substr(3,2));
        int h2=stoi(s2.substr(0,2));
        int m2=stoi(s2.substr(3,2));

        return (h2-h1)*60+m2-m1;
    }
};
