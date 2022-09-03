class Solution {
public:
    int partitionArray(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int i=0;
        int j=0;
        int p=1;
        while(j<n)
        {
            if((arr[j]-arr[i])>k)
            {
                p++;
                i=j;
            }
            else
            {
                j++;
            }
        }
        return p;
    }
};