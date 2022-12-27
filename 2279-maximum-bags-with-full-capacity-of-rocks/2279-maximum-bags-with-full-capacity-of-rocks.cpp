class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        int n=capacity.size();
        vector<int> arr(n,0);
        for(int i=0;i<n;i++)
        {
            arr[i]=capacity[i]-rocks[i];
        }
        sort(arr.begin(),arr.end());
        int x=additionalRocks;
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=x)
            {
                x=x-arr[i];
                c++;
            }
            else
            {
                break;
            }
        }
        return c;
    }
};