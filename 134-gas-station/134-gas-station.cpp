class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         gas : 1 2 3 4 5
//         cost: 3 4 5 1 2
        int n=gas.size();
        int g=0;
        int pos=0;
        for(int i=0;i<n;i++)
        {
            if((g+gas[i]-cost[i])<0)
            {
                pos=i+1;
                g=0;
            }
            else
            {
                g=g+gas[i]-cost[i];   
            }
        }
        int j=0;
        while(j<pos)
        {
            g+=gas[j]-cost[j];
            if(g<0)
            {
                return -1;
            }
            j++;
        }
        return pos;
    }
};