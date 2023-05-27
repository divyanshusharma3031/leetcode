class DSU
{
    public:
  vector<int> parent, size;

  DSU(int n)
  {
    parent.resize(n + 1);
    size.resize(n + 1);
    for (int i = 0; i <= n; i++)
    {
      parent[i] = i;
      size[i] = 1;
    }
  }

  int find(int node)
  {
    if (node == parent[node])
      return node;
    return parent[node] = find(parent[node]);
  }

  void union_size(int u, int v)
  {
    int ulp_u = find(u);
    int ulp_v = find(v);
    if (ulp_u == ulp_v)
      return;
    if (size[ulp_u] < size[ulp_v])
    {
      parent[ulp_u] = ulp_v;
      size[ulp_v] += size[ulp_u];
    }
    else
    {
      parent[ulp_v] = ulp_u;
      size[ulp_u] += size[ulp_v];
    }
  }
};

class Solution {
public:
    bool canTraverseAllPairs(vector<int>& nums) {
        unordered_map<int,vector<int>> mpp;
        int n=nums.size();
       for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1 && n!=1)
            {
                return false;
            }
            for(int j=2;j*j<=nums[i];j++)
            {
                if(nums[i]%j==0)
                {
                    mpp[j].push_back(i);
                    if(j!=(nums[i]/j))
                    {
                        mpp[nums[i]/j].push_back(i);
                    }
                }
            }
            mpp[nums[i]].push_back(i);
        }
        DSU d(n);
        for(auto it:mpp)
        {
            for(int i=0;i<it.second.size()-1;i++)
            {
                d.union_size(it.second[i],it.second[i+1]);
            }
        }
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(d.find(i));
        }
        return s.size()==1;
    }
};