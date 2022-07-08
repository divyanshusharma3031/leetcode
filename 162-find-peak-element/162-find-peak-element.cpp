class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int j=nums.size()-1;
        int i=0;
        vector<int> arr=nums;
        while(i<j)
        {
            int mid=(i+j)/2;
            int mid2=mid+1;
            if(arr[mid]>arr[mid+1])
            {
                j=mid;
            }
            else
            {
                i=mid2;
            }
        }
        return i;
    }
};