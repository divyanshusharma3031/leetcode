class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
       int lo=1;
        int hi=arr.size()-2;
        while(lo<=hi)
        {
            int mid=(lo+hi)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
            {
                return mid;
            }
            if(arr[mid]<arr[mid-1])
            {
                hi=mid-1;
            }
            else
            {
                lo=mid+1;
            }
        }
        return -1;
    }
};