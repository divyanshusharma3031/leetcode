class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n=arr.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            int nxt=mid+1;
            int prev=mid-1;
            if((nxt>=n || arr[nxt]>arr[mid] ) && (prev<0 || arr[prev]<arr[mid]))
            {
                return arr[mid];
            }
            if(nxt<n && arr[nxt]>arr[mid])
            {
                int rem=n-mid-1;
                if(rem%2==0)
                {
                    hi=mid-1;
                }
                else
                {
                    lo=mid+1;
                }
            }
            else
            {
                int rem=mid;
                if(rem%2==0)
                {
                    lo=mid+1;
                }
                else
                {
                    hi=mid-1;
                }
            }
        }
        return arr[hi];
    }
};
// 1 1 2 2 3 3 4 8 8
//         