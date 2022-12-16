class Solution {
public:
    bool check(char c)
    {
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        {
            return true;
        }
        else if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        {
            return true;
        }
        return false;
    }
    bool halvesAreAlike(string s) {
        vector<int> arr(s.size(),0);
        int n=s.size();
        if(check(s[0]))
        {
            arr[0]=1;
        }
        for(int i=1;i<n;i++)
        {
             if(check(s[i]))
             {
                 arr[i]=arr[i-1]+1;
             }
            else
            {
                arr[i]=arr[i-1];
            }
        }
        int total=arr[n-1];
        for(int i=0;i<n;i++)
        {
            // cout<<arr[i]<<" "<<total-arr[i]<<"\n";
            if(arr[i]==(total-arr[i]) && (i+1)==(n-i-1))
            {
                return true;
            }
        }
        return false;
    }
};