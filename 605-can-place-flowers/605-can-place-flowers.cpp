class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        unordered_map<int,int> planted;
        unordered_map<int,int> space;
        int N=arr.size();
        for(int i=0;i<N;i++)
        {
            // cout<<arr[i]<<" ";
            if(arr[i]==1)
            {
                planted[i]++;
            }
            else
            {
                space[i]++;
            }
        }
        int c=0;
        for(auto it:space)
        {
            int x=it.first;
            // cout<<x<<" ";
            if(planted[x-1] || planted[x+1])
            {
                
            }
            else
            {
                planted[x]++;
                c++;
            }
        }
        return c>=n;
    }
};