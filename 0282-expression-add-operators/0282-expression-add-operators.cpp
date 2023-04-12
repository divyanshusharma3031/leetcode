class Solution {
public:
    vector<string> ans;
    void evaluate(int i,string &nums,string s,long long target,long long prev,long long curr)
    {
        int n=nums.size();
        if(i==n)
        {
            if(curr==target)
            {
                ans.push_back(s);
            }
            return;
        }
        string str="";
        for(int idx=i;idx<n;idx++)
        {
            if(str.size()>=1 && nums[i]=='0')
            {
                return;
            }
            str+=nums[idx];
            long long val=stoll(str);
            if(i==0)
            {
                evaluate(idx+1,nums,s+str,target,val,val);
                continue;
            }
            evaluate(idx+1,nums,s+"+"+str,target,val,curr+val);
            evaluate(idx+1,nums,s+"-"+str,target,-val,curr-val);
            evaluate(idx+1,nums,s+"*"+str,target,val*prev,curr-prev+prev*val);
        }
    }
    vector<string> addOperators(string num, int target) {
        evaluate(0,num,"",target,0,0);
        return ans;
    }
};