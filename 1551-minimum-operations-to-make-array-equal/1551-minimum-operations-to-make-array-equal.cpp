class Solution {
public:
    int minOperations(int n) {
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
        {
            arr[i]=2*i+1;
        }
        long long s=0;
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
        }
        long long avg=s/n;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans=ans+abs(arr[i]-avg);
        }
        return ans/2;
    }
};