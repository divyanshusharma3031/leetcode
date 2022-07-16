class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        int n=s.length();
        long long c=0;
        while(i<n && s[i]==' ')
        {
            i++;
        }
        bool b=false;
        if(s[i]=='-')
        {
            b=true;
            i++;
        }
        else if(s[i]=='+')
        {
            i++;
        }
        while(i<n && s[i]>='0' && s[i]<='9')
        {
            c=c*10+(s[i]-'0');
            if(b)
            {
                if(c*(-1)<=INT_MIN)
                {
                    return INT_MIN;
                }
            }
            else
            {
                if(c>=INT_MAX)
                {
                    return INT_MAX;
                }
            }
            i++;
        }
        if(b)
        {
            return -c;
        }
        return c;
    }
};