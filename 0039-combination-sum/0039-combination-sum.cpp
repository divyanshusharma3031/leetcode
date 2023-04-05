class Solution {
public:
    void combo(vector<vector<int>> &ans,vector<int>& arr, int target,vector<int> v,int n)
    {
        if(target<0)
        {
            return ;
        }
        if(target==0)
        {
            ans.push_back(v);
            return;
        }
        if(n==0)
        {
            return ;
        }
        target=target-arr[n-1];
        v.push_back(arr[n-1]);
        combo(ans,arr,target,v,n);
        target=target+arr[n-1];
        v.pop_back();
        combo(ans,arr,target,v,n-1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> v;
        combo(ans,candidates,target,v,candidates.size());
        return ans;
    }
};