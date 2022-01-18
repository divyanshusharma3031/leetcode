class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int x=arr[0];
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            x=x^arr[i];
        }
        return x;
    }
};