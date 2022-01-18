class Solution {
public:
    int rotation(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        while(start<=end)
        {
            int mid=start + (end-start)/2;
            if(arr[mid]<arr[(mid+1)%(arr.size())] && arr[mid]<arr[(mid+arr.size()-1)%arr.size()])
            {
                return mid;
            }
            else if(arr[start]>arr[mid])
            {
                end=mid-1;
            }
            else if(arr[end]<arr[mid])
            {
                start=start+1;
            }
            else
            {
                return 0;
            }
        }
        return 0;
    }
    int search(vector<int>& arr, int target) {
        int start=0;
        int end=arr.size()-1;
        int k=rotation(arr);
        start=k;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==target)
            {
                return mid;
            }
            else if(arr[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        start=0;
        end=k-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[mid]==target)
            {
                return mid;
            }
            else if(arr[mid]<target)
            {
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return -1;
    }
};