class Solution {
public:
    string countSort(string arr){
        // code here
        int fre[26]={0};
        int n=arr.length();
        for(int i=0;i<n;i++)
        {
            fre[arr[i]-'a']++;
        }
        for(int i=1;i<26;i++)
        {
            fre[i]=fre[i]+fre[i-1];
        }
        vector<char> str(arr.length());
        for(int i=arr.length()-1;i>=0;i--)
        {
            fre[arr[i]-'a']--;
            // cout<<fre[arr[i]-'a']<<" "<<arr[i]<<"\n";
            if(fre[arr[i]-'a']>=0)
            {str[fre[arr[i]-'a']]=arr[i];}
        }
        string s="";
        int i=0;
        while(i<arr.length())
        {
            s+=str[i];
            i++;
        }
        return s;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> copy=strs;
        int n=strs.size();
        for(int i=0;i<n;i++)
        {
            strs[i]=countSort(strs[i]);
        }
        map<string,vector<string>> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[strs[i]].push_back(copy[i]);
        }
        vector<vector<string>> ans;
        for(auto it:mpp)
        {
            vector<string> v;
            for(auto i:it.second)
            {
                v.push_back(i);
            }
            ans.push_back(v);
        }
        return ans;
    }
};