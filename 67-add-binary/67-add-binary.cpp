class Solution {
public:
    string addBinary(string a, string b) {
        string s;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int i=0;
        int n=a.length();
        int m=b.length();
        int c=0;
        while(i<n && i<m)
        {
            if(a[i]=='1' && b[i]=='1')
            {
                if(c==0)
                {s+="0";}
                else
                {
                    s+="1";
                }
                c=1;
            }
            else if(a[i]=='0' && b[i]=='0')
            {
                if(c==0)
                {
                    s+="0";
                }
                if(c==1)
                {
                    s+="1";
                    c=0;
                }
            }
            else
            {
                if(c==0)
                {
                    s+="1";
                }
                else
                {
                    s+="0";
                    c=1;
                }
            }
            i++;
        }
        while(i<n)
        {
            if(a[i]=='0')
            {
                if(c==0)
                {
                    s+="0";
                }
                else
                {
                    s+="1";
                    c=0;
                }
            }
            else
            {
                if(c==0)
                {
                    s+="1";
                }
                else
                {
                    s+="0";
                    c=1;
                }
            }
            i++;
        }
        while(i<m)
        {
              if(b[i]=='0')
            {
                if(c==0)
                {
                    s+="0";
                }
                else
                {
                    s+="1";
                    c=0;
                }
            }
            else
            {
                if(c==0)
                {
                    s+="1";
                }
                else
                {
                    s+="0";
                    c=1;
                }
            }
            i++; 
        }
        if(c!=0)
        {
            s+="1";
        }
        reverse(s.begin(),s.end());
        return s;
    }
};