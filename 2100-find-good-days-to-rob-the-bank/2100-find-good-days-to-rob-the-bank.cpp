class Solution {
public:
    vector<int> goodDaysToRobBank(vector<int>& security, int time) {
        vector<int> ans;
        vector<int> arr=security;
        int l=2*time+1;
        int i=0;
        int j=2*time;
        int n=security.size();
        if(j>n)
        {
            return {};
        }
        vector<int> dec(n,0);
        l=1;
        dec[0]=1;
        for(int i=1;i<n;i++)
        {
            if(arr[i]<=arr[i-1])
            {
                l++;
            }
            else
            {
                l=1;
            }
            dec[i]=l;
        }
        vector<int> inc(n,0);
        l=1;
        inc[n-1]=1;
        for(int i=n-2;i>=0;i--)
        {
            if(arr[i]<=arr[i+1])
            {
                l++;
            }
            else
            {
                l=1;
            }
            inc[i]=l;
        }
        while(j<n)
        {
            int idx=(i+j)/2;
            if(dec[idx]>=(time+1) && inc[idx]>=(time+1))
            {
                ans.push_back(idx);
            }
            i++;
            j++;
        }
        return ans;
    }
};