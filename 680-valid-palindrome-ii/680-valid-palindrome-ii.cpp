#include<string.h>
class Solution {
public:
    bool palindrome(string &s)
    {
        int i=0;
        int n=s.length()-1;
        while(i<=n)
        {
            if(s[i]!=s[n])
            {
                return false;
            }
            i++;
            n--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        if(palindrome(s))
        {
            return true;
        }
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                break;
            }
            i++;
            j--;
        }
        string s1=s.substr(0,i)+s.substr(i+1);
        string s2=s.substr(0,j)+s.substr(j+1);
        if(palindrome(s1)|| palindrome(s2))
        {
            return true;
        }
        return false;
    }
};