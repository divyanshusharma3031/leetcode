class Solution {
public:
    long long getDescentPeriods(vector<int>& arr) {
        long long ans=0;
        int n=arr.size();
        for(int i=0;i<n;)
        {
            long long l=1;
            int j=i+1;
            while(j<n && (arr[j-1]-arr[j])==1)
            {
                j++;
                l++;
            }
            i=j;
            ans=ans+l*(l+1)/2;
        }
        return ans;
    }
};