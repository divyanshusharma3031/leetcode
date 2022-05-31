class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int i=0;
        int j=0;
        int n=name.length();
        int m=typed.length();
        
        while(i<n)
        {
            if(name[i]!=typed[j])
            {
                return false;
            }
            int mn=1;
            while(i<n-1 && name[i]==name[i+1])
            {
                mn++;
                i++;
            }
            int w=1;
            
            while(j<m-1 && typed[j]==typed[j+1])
            {
                w++;
                j++;
            }
            if(w<mn)
            {
                return false;
            }
            i++;
            j++;
        }
        if(j!=m)
        {
            return false;
        }
        return true;
    }
};