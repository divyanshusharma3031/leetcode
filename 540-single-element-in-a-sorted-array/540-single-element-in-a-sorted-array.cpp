class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int start=0;
        int end=arr.size()-1;
        int n=arr.size();
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(mid-1>=0 && arr[mid]==arr[mid-1])
            {
                if(mid%2)
                {
                    start=mid+1;
                }
                else
                {
                    end=mid-1;
                }
            }
            else if(mid<n-1 && arr[mid]==arr[mid+1])
            {
                if(mid%2)
                {
                    end=mid-1;
                }
                else
                {
                    start=mid+1;
                }
            }
            else
            {
                return arr[mid];
            }
        }
        return arr[0];
    }
};