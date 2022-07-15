class Solution {
public:
    bool ispalindrome(string str)
    {
        int i=0;
        int j=str.size()-1;
        while(i<j)
        {
            if(str[i]!=str[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        int i=0;
        int n=s.size();
        string str="";
        for(int i=0;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
            {
                str.push_back(s[i]+32);
            }
            else if(s[i]>='a' && s[i]<='z')
            {
                str.push_back(s[i]);
            }
            else if(s[i]>='0' && s[i]<='9')
            {
                str.push_back(s[i]);
            }
        }
        // cout<<str<<"\n";
        return ispalindrome(str);
    }
};