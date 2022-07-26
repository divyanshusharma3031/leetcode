class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> ans;
        int n=digits.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j)
                {
                    for(int k=0;k<n;k++)
                    {
                        if((digits[k]%2==0) && k!=i && k!=j && digits[i]!=0)
                        {
                            int a=digits[i]*100+digits[j]*10+digits[k];
                            if(mpp[a])
                            {
                                continue;
                            }
                            ans.push_back(a);
                            mpp[a]++;
                        }
                    }
                }
                
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};