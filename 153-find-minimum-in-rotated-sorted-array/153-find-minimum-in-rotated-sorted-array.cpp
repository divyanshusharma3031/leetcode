class Solution {
public:
    int findMin(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        // if(arr.size()==2)
        // {
        //     if(arr[0]>arr[1])
        //     {
        //         return arr[1];
        //     }
        //     else
        //     {
        //         return arr[0];
        //     }
        // }
        while(start<=end)
        {
            int mid=start + (end-start)/2;
            if(arr[mid]<arr[(mid+1)%(arr.size())] && arr[mid]<arr[(mid+arr.size()-1)%arr.size()])
            {
                return arr[mid];
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
                return arr[0];
            }
        }
        return arr[0];
    }
};