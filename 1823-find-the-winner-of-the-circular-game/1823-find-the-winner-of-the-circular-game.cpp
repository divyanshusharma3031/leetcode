class Solution {
public:
    int findTheWinner(int n, int k) {
        if(n==1)
        {
            return 1;
        }
        set<int> s;
        for(int i=1;i<=n;i++)
        {
            s.insert(i);
        }
        int i=0;
        int c=0;
        while(c<k)
        {
            i++;
            c++;
        }
        // cout<<i<<"\n";
        s.erase(i);
        while(s.size()>1)
        {
            c=0;
            while(c<k)
            {
                i=(i+1)%(n+1);
                while(s.find(i)==s.end())
                {
                    i=(i+1)%(n+1);
                }
                
                c++;
            }
            // cout<<i<<"\n";
            s.erase(i);
        }
        return *s.begin();
    }
};