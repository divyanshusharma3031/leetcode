class Solution {
public:
    void lpsgenerate(string b, vector<int> &lps)
    {
        lps[0] = 0;
        int i = 1;
        int len = 0;
        int n = b.length();
        while (i < n)
        {
            if (b[i] == b[len])
            {
                len++;
                lps[i] = len;
                i++;
            }
            else
            {
                if (len != 0)
                {
                    len = lps[len-1];
                }
                else
                {
                    lps[i] = 0;
                    i++;
                }
            }
        }
    }
    int strStr(string &a, string &b) {
        // Write your code here
        int m = b.length();
        vector<int> lps(m, 0);
        int N=a.length();
        lpsgenerate(b, lps);
        int i = 0;
        int j = 0;
        bool x=false;
        vector<int> ans;
        while (i < a.length())
        {
            if (b[j] == a[i])
            {
                j++;
                i++;
            }
            if(j==m)
            {
                x=true;
                ans.push_back(i-j+1);
                j=lps[j-1];
            }
            else if(i<N && b[j]!=a[i])
            {
                if(j!=0)
                {
                    j=lps[j-1];
                }
                else
                {
                    i++;
                }
            }
        }
        if(!x)
        {
            return -1;
        }
        return ans[0]-1;
    }
};