class Solution {
public:
    long long minCost(vector<long long> &A)
    {
        long long cost = 0;
        int n=A.size();
        sort(A.begin(),A.end());
        int K = A[n / 2];
        for (int i = 0; i < n; ++i)
            cost += abs(A[i] - K);
        if (n % 2 == 0) {
            long long tempCost = 0;

            K = A[(n / 2) - 1];
            for (int i = 0; i < n; ++i)
                tempCost += abs(A[i] - K);
            cost = min(cost, tempCost);
        }
        return cost;
    }
    long long makeSubKSumEqual(vector<int>& arr, int k) {
        long long n=arr.size();
        long long s=0;
        if(n==k)
        {
            return 0;
        }
        vector<vector<long long>> matrix;
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            vector<long long> v;
            int x=i;
            if(mpp[x])
            {
                break;
            }
            while(x<n && mpp[x]==0)
            {
                v.push_back(arr[x]);
                mpp[x]=1;
                x=(k+x)%n;
            }
            matrix.push_back(v);
        }
        long long ans=0;
        for(int i=0;i<matrix.size();i++)
        {
            ans=ans+minCost(matrix[i]);
        }
        return ans;
    }
};
// [1,4,1,3];
// [1,4]
// [4,1]
// [1,3]
// [3,1]
// 5+5+4+4=18