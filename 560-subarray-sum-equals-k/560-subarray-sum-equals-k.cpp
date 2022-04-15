class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        map<int,int> mpp;
        int s=0;
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
            
            if(s==k)
            {
                ans++;
            }
            if(mpp[s-k])
            {
                // cout<<1<<"\n";
                ans+=mpp[s-k];
            }
            mpp[s]++;
        }
        return ans;
    }
};