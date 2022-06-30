class Solution {
public:
    int minMoves(vector<int>& arr) {
        int ans=0;
        int n=arr.size();
        int mn=INT_MAX;
        for(int i=0;i<n;i++)
        {
            ans+=arr[i];
            mn=min(mn,arr[i]);
        }
        return ans-n*mn;
    }
};