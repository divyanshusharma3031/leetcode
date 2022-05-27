class Solution {
public:
    bool canReorderDoubled(vector<int>& arr) {
        map<double,int> mpp;
        map<int,int> vis;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int x=0;
        for(int i=0;i<n;i++)
        {
            double y=double(arr[i])/2.0;
            if(mpp[y])
            {
                // cout<<y<<"\n";
                // cout<<x<<" "<<y<<"\n";
                x++;  
                mpp[arr[i]]--;
                mpp[y]--;
            }
            else if(mpp[arr[i]*2])
            {
                x++;
                mpp[arr[i]*2]--;
                mpp[arr[i]]--;
            }
            mpp[arr[i]]++;
        }
        if(x==n/2)
        {
            return true;
        }
        return false;
    }
};