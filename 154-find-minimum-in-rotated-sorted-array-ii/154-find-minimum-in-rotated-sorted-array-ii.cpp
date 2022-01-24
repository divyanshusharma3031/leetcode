class Solution {
public:
    int findMin(vector<int>& arr) {
        int start=0;
        int n=arr.size();
        int end=n-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(arr[(mid-1+n)%n]>arr[mid] && arr[mid]<=arr[(mid+1)%n])
            {
                return arr[mid];
            }
            else if(arr[mid]>arr[end])
            {
                start=mid+1;
            }
            else if(arr[mid]<arr[end])
            {
                end=mid;
            }
            else
            {
                end--;
            }
        }
        return arr[0];
    }
};