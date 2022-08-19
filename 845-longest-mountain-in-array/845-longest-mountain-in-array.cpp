class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        int l=1;
        for(int i=0;i<n-1;)
        {
            if(arr[i]<arr[i+1])
            {
                l++;
                i++;
            }
            else if((arr[i]==arr[i+1]) || (l==1))
            {
                l=1;
                i++;
            }
            else
            {
                while(i<n-1 && arr[i]>arr[i+1])
                {
                    i++;
                    l++;
                }
                ans=max(ans,l);
                l=1;
            }
        }
        return ans;
    }
};