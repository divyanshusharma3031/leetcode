class Solution {
public:
    int reverse(int x) {
        // 2,147,483,647 max positive value
        
        if(x>=0)
        {
            vector<int> v;
            int temp=x;
            while(temp>0)
            {
                v.push_back(temp%10);
                temp=temp/10;
            }
            if(v.size()<=9)
            {
                int ans=0;
                // std::reverse(v.begin(),v.end());
                for(int i=0;i<v.size();i++)
                {
                    ans=ans*10+v[i];
                }
                return ans;
            }
            else
            {
                int ans=0;
                vector <int> c={2,1,4,7,4,8,3,6,4,7};
                // std::reverse(v.begin(),v.end());
                for(int i=0;i<v.size();i++)
                {
                    if(v[i]<c[i])
                    {
                        break;
                    }
                    else if(v[i]==c[i])
                    {
                        
                    }
                    else
                    {
                        return 0;
                    }
                }
            for(int i=0;i<v.size();i++)
                {
                    ans=ans*10+v[i];
                }
                return ans;
            }
        }
        //negative number
        vector<int> v;
        if(x==-2147483648)
        {
            return 0;
        }
        x=-x;
        while(x>0)
        {
            v.push_back(x%10);
            x=x/10;
        }
        if(v.size()<=9)
        {
            int ans=0;
                // std::reverse(v.begin(),v.end());
                for(int i=0;i<v.size();i++)
                {
                    ans=ans*10+v[i];
                }
             ans=-ans;
                return ans;
        }
        else
        {
            int ans=0;
                vector <int> c={2,1,4,7,4,8,3,6,4,8};
                // std::reverse(v.begin(),v.end());
                for(int i=0;i<v.size();i++)
                {
                    if(v[i]<c[i])
                    {
                        break;
                    }
                    else if(v[i]==c[i])
                    {
                        
                    }
                    else
                    {
                        return 0;
                    }
                }
                for(int i=0;i<v.size();i++)
                {
                    ans=ans*10+v[i];
                }
                ans=-ans;
                return ans;
        }
    }
};