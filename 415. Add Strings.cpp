//aman kumar jha
class Solution {
public:
    string addStrings(string a, string b)
    {
        string res="";
        int carry=0;
        int i=a.length()-1;
        int j=b.length()-1;
        while(i>=0||j>=0||carry)
        {
            int sum=0;
            if(i>=0)
            {sum+=(a[i]-'0');i--;}
            if(j>=0)
            {sum+=(b[j]-'0');j--;}

            sum+=carry;
            carry=sum/10;
            sum=sum%10;
            res+=(to_string(sum));
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
