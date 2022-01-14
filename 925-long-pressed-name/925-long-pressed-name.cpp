class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        string s="";
        int n=name.length();
        int m=typed.length();
        int i=0;
        int j=0;
        while(i<n)
        {
            char ele=name[i];
            int c=1;
            i++;
            while(i<n && name[i]==name[i-1])
            {
                c++;
                i++;
            }
            int x=0;
            while(j<m && typed[j]==ele)
            {
                j++;
                x++;
            }
            // cout<<c<<" "<<x<<'\n';
            if(c>x)
            {
                return false;
            }
        }
        if(j!=m)
        {
            return false;
        }
         return true;
    }
};