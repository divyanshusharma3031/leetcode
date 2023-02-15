
string findSum(string &str1, string &str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
 
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');
    reverse(str.begin(), str.end());
 
    return str;
}
class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string s="";
        for(int i=0;i<num.size();i++)
        {
            s+=to_string(num[i]);
        }
        string s2="";
        while(k>0)
        {
            s2+=to_string(k%10);
            k=k/10;
        }
        reverse(s2.begin(),s2.end());
        string s3=findSum(s,s2);
        vector<int> ans;
        for(auto it:s3)
        {
            ans.push_back(it-'0');
        }
        return ans;
    }
};