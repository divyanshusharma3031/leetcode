class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int i=0;
        int j=0;
        int n=str1.length();
        int m=str2.length();
        if(str1[i]!=str2[j])
        {
            return "";
        }
        string temp="";
        string ans="";
        for(i=0;i<n;i++)
        {
            if(i<m && str1[i]!=str2[i])
            {
                return "";
            }
            temp+=str1[i];
            string t=temp;
            while(t.size()<str1.size())
            {
                t+=temp;
            }
            if(t==str1)
            {
                t=temp;
                while(t.size()<str2.size())
                {
                    t+=temp;
                }
                if(t==str2)
                {
                    ans=temp;
                }
            }
            else
            {
                continue;
            }
        }
        return ans;
    }
};