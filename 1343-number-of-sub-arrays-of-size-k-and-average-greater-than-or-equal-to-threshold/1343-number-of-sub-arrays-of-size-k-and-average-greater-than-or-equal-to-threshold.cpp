class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int s=0;
        for(int i=0;i<k;i++)
        {
            s=s+arr[i];
        }
        int j=0;
        int i=k;
        int ans=0;
        if((s/k)>=threshold)
            {
                ans++;
            }
        while(i<n)
        {
            s=s-arr[j];
            s+=arr[i];
            if((s/k)>=threshold)
            {
                ans++;
            }
            j++;
            i++;
        }
        return ans;
    }
};