class Solution {
public:
    int target=0;
    bool possible(vector<int> &v,vector<int> &arr,int idx)
    {
        int n=arr.size();
        if(idx==n)
        {
            return (v[0]==v[1]) && (v[1]==v[2]) && (v[2]==v[3]);
        }
        
        for(int i=0;i<4;i++)
        {
            if((v[i]+arr[idx])>target)
            {
                continue;
            }
            int j = i;
            while (--j >= 0) // third
                if (v[i] == v[j]) 
                    break;
            if (j != -1) continue;
            v[i]+=arr[idx];
            if(possible(v,arr,idx+1))
            {
                return true;
            }
            v[i]-=arr[idx];
        }
        return false;
    }
    bool makesquare(vector<int>& arr) {
        int s=0;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            s+=arr[i];
        }
        if((s%4)!=0)
        {
            return false;
        }
        sort(arr.begin(),arr.end(),greater<int>());
        target=s/4;
        vector<int> v(4,0);
        return possible(v,arr,0);
    }
};