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

        // below function returns the subsets of vector A.
        vector<vector<int> > subsets(vector<int>& A)
        {
            vector<int> subset;
            vector<vector<int> > res;

            // keeps track of current element in vector A;
            int index = 0;
            subsetsUtil(A, res, subset, index);

            return res;
        }
    int countMaxOrSubsets(vector<int>& arr) {
        int mxor=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mxor=mxor|arr[i];//this will be mxor;
        }
        int a=0;
        vector<vector<int>> ans=subsets(arr);
        for(int i=0;i<ans.size();i++)
        {
            int x=0;
            for(int j=0;j<ans[i].size();j++)
            {
                x=x|ans[i][j];
            }
            if(mxor==x)
            {
                a++;
            }
        }
        return a;
    }
};