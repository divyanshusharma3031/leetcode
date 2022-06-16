class Solution {
public:
    void subsetsUtil(vector<int>& A, vector<vector<int> >& res,
                 vector<int>& subset, int index)
        {
            res.push_back(subset);
            for (int i = index; i < A.size(); i++) {

                // include the A[i] in subset.
                subset.push_back(A[i]);

                // move onto the next element.
                subsetsUtil(A, res, subset, i + 1);

                // exclude the A[i] from subset and triggers
                // backtracking.
                subset.pop_back();
            }

            return;
        }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> subset;
        subsetsUtil(nums,ans,subset,0);
        return ans;
    }
};