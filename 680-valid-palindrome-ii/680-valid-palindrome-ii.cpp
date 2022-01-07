class Solution {
public:
    bool ispalindrome(string s)
    {
        int i=0;
        int j=s.length()-1;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0;
        int j=s.length()-1;
        int c=0;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                c++;
                if(c>1)
                {
                    return false;
                }
                
                if(ispalindrome(s.substr(i+1,j-i)))
                {
                    i++;
                }
                else if(ispalindrome(s.substr(i,j-i)))
                {
                    j--;
                }
                else
                {
                    return false;
                }
            }
            i++;
            j--;
        }
        return true;
    }
};