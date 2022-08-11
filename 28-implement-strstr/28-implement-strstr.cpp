class Solution {
public:
    int strStr(string &source, string &target) {
        // Write your code here
        int n=source.length();
        if(n==0)
        {
            if(source==target)
            {
                return 0;
            }
            return -1;
        }
        int m=target.length();
        if(m==0)
        {
            return 0;
        }
        for(int i=0;i<n;i++)
        {
            string temp="";
            for(int j=i;j<n;j++)
            {
                temp+=source[j];
                if(temp.size()==target.size() && temp==target)
                {
                    return i;
                }
                if(temp.size()>target.size())
                {
                    break;
                }
            }
        }
        return -1;
    }
};