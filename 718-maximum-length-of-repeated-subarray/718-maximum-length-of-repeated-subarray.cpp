class Solution {
public:
    int findLength(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        vector<int> dp(m+1,0);
        int mx=0;
        for(int i=1;i<=n;i++)
        {
            vector<int> temp(m+1,0);
            for(int j=1;j<=m;j++)
            {
                if(nums1[i-1]==nums2[j-1])
                {
                    temp[j]=1+dp[j-1];
                    mx=max(mx,temp[j]);
                }
                else
                {
                    temp[j]=0;
                }
            }
            dp=temp;
        }
        return mx;
    }
};