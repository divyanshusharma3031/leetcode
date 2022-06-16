class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int x=0;
            int l=0;
            for(int j=i;j<n;j++)
            {
                x=x^arr[j];
                l++;
                if(x==0 && l>=2)
                {
                    ans+=l-1;
                }
            }
        }
        return ans;
    }
};