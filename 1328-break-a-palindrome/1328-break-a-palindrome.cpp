class Solution {
public:
    bool alla(string s)
    {
        int n=s.length();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a')
            {
                c++;
            }
        }
        return c==n;
    }
    string breakPalindrome(string palindrome) {
        if(palindrome.size()==1)
        {
            return "";
        }
        if(alla(palindrome))
        {
            palindrome[palindrome.size()-1]='b';
            return palindrome;
        }
        string s=palindrome;
        int n=s.size();
        for(int i=0;i<n/2;i++)
        {
            if(s[i]!='a')
            {
                s[i]='a';
                return s;
            }
        }
        s[n-1]='b';
        return s;
    }
};