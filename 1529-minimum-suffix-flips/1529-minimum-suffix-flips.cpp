class Solution {
public:
    int minFlips(string target) {
        string s="00000";
        if(s==target)
        {
            return 0;
        }
        char status='0';
        int n=target.length();
        int c=0;
        for(int i=0;i<n;i++)
        {
            if(status!=target[i])
            {
                status=target[i];
                c++;
            }
        }
        return c;
    }
};