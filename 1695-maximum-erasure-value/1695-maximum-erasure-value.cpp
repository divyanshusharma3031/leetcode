class Solution {
public:
    int maximumUniqueSubarray(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int ans=-1;
        int n=arr.size();
        int i=0;
        int j=0;
        int s=0;
        while(i<n)
        {
            mpp[arr[i]]++;
            s=s+arr[i];
            if(mpp[arr[i]]>1)
            {
                int ele=arr[i];
                while(arr[j]!=ele)
                {
                    s=s-arr[j];
                    mpp[arr[j]]--;
                    j++;
                }
                s=s-arr[j];
                mpp[arr[j]]--;
                j++;
            }
            // cout<<j<<"\n";
            ans=max(ans,s);
            i++;
        }
        return ans;
    }
};