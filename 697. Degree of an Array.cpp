//aman kumar jha
class Solution {
public:
    int findleft(vector<int> a,int val)
    {
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==val)
                return i;
        }
    }
    int findright(vector<int> a,int val)
    {
        for(int i=a.size();i>=0;i--)
        {
            if(a[i]==val)
                return i;
        }
    }
    int findShortestSubArray(vector<int>& a)
    {
        auto comp=[&](pair<int,int> it1,pair<int,int> it2){return it1.first>it2.first;};
        map<int,int> mp;
        int n=a.size();
        if(n==1)
            return 1;
        vector<pair<int,int> > vec;
        for(auto x:a)
            mp[x]++;

        for(auto x:mp)
        {
            //freq,elem
            vec.push_back(make_pair(x.second,x.first));
        }
        sort(vec.begin(),vec.end(),comp);
        //for(auto x:vec){cout<<x.first<<" "<<x.second<<"\n";}
        int maxf=(vec[0].first);
        int len=INT_MAX;
        for(int i=0;i<vec.size();i++)
        {
            if(maxf==(vec[i].first))
            {
                 //find left
               int l=findleft(a,vec[i].second);
                //find right
               int r=findright(a,vec[i].second);
                //cout<<r<<" "<<l<<"\n";
                len=min(len,r-l+1);
            }
        }
        return len;
    }
};
