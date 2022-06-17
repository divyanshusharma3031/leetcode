class Solution {
public:
    int divisorSubstrings(int num, int k) {
        
        string a;
        
        int i=0;
        
        int x=num;
        
        while(x>0)
        {
            string s=to_string(x%10);
            a+=s;
            x=x/10;
        }
        reverse(a.begin(),a.end());
        int j=0;
        int ans=0;
        int n=a.length();
        for(int i=0;i<n;i++)
        {
            if((i-j+1)>k)
            {
                j++;
            }
            if((i-j+1)==k)
            {
                string temp=a.substr(j,i-j+1);
                int x=stoi(temp);
                if(x!=0 && num%x==0)
                {
                    ans++;
                }
            }
        }
        return ans;
    }
};