class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        
        int n=s.length();
        
        queue<int> q;
        int c=0;
        int ans=0;
        int j=0;
        int temp=k;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='T')
            {
            }
            else
            {
                if(k>0)
                {
                    k--;
                }
                else
                {
                    while(j<n && s[j]!='F')
                    {
                        j++;
                    }
                    j++;
                }
            }
            ans=max(ans,i-j+1);
        }
        c=0;
        k=temp;
        // cout<<k<<"\n";
        j=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='F')
            {
                q.push(i);
                c++;
            }
            else
            {
                if(k>0)
                {
                    k--;
                }
                else
                {
                    while(j<n && s[j]!='T')
                    {
                        j++;
                    }
                    j++;
                }
            }
            // cout<<i<<" "<<j<<"\n";
            ans=max(ans,i-j+1);
        }
        return ans;
    }
};