class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int n=digits.size();
        digits[0]=digits[0]+1;
        int c=digits[0]/10;
        digits[0]=digits[0]%10;
        int i=1;
        while(i<n)
        {
            digits[i]=digits[i]+c;
            c=digits[i]/10;
            if(c==0)
            {
                break;
            }
            digits[i]=digits[i]%10;
            i++;
        }
        if(c!=0)
        {
            digits.push_back(c);
        }
        reverse(digits.begin(),digits.end());
        return digits;
    }
};