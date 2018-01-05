//aman kumar jha
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target)
    {
        char ch=letters[0];
        int n=letters.size();
        for(int i=n-1;i>=0;i--)
        {
            if(letters[i]>target)
                ch=letters[i];
        }
        return ch;
    }
};
