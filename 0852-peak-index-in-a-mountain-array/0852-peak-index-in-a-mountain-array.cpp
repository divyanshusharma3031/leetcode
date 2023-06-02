class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int lo=0;
        int hi=n-1;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(mid>0 && mid<n && arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            if(mid<n && arr[mid]<arr[mid+1])
            {
                lo=mid+1;
            }
            else
            {
                hi=mid-1;
            }
        }
        return lo;
    }
};