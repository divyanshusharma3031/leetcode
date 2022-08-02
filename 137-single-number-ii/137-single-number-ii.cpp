class Solution {
public:
    int singleNumber(vector<int>& arr) {
        vector<int> bits(33,0);
        for(int i=0;i<32;i++)
        {
            for(auto x:arr)
            {
                long long it=abs(x);
                if(x&(1<<i))
                {
                    bits[i]++;
                }
            }
        }
        long long ans=0;
        for(int i=0;i<32;i++)
        {
            if(bits[i]%3==0)
            {
                bits[i]=0;
            }
            else
            {
                bits[i]=1;
            }
        }
        for(int i=0;i<32;i++)
        {
            ans=ans+pow(2,i)*bits[i];
        }
        int  c=0;
        
        for(int i=0;i<arr.size();i++)
        {
            if(ans==arr[i])
            {
                c++;
            }
        }
        if(c==1)
        {
            return ans;
        }
        ans=-ans;
        // cout<<ans<<"\n";
        return -ans;
    }
};