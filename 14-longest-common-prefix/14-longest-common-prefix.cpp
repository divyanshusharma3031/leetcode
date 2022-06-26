class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0)
        {
            return strs[0];
        }
        string prev=strs[0];
        for(int i=1;i<n;i++)
        {
            int j=0;
            int k=0;
            int m=strs[i].size();
            int s=prev.size();
            string ne="";
            while(j<m && k<s)
            {
                if(strs[i][j]==prev[k])
                {
                    ne+=prev[k];
                    k++;
                    j++;
                }
                else
                {
                    break;
                }
            }
            prev=ne;
        }
        return prev;
    }
};