class Solution {
public:
    void gameOfLife(vector<vector<int>>& matrix) {
        vector<vector<int>> v=matrix;
        int n=v.size();
        int m=v[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int r1=i-1;
                int c1=j;
                int r2=i+1;
                int c2=j;
                int r3=i;
                int c3=j+1;
                int r4=i;
                int c4=j-1;
                int r5=i-1;
                int c5=j-1;
                int r6=i-1;
                int c6=j+1;
                int r7=i+1;
                int c7=j-1;
                int r8=i+1;
                int c8=j+1;
                int a=0;
                if(r1>=0 && c1>=0 && r1<n && c1<m)
                {
                    // cout<<r1<<" "<<c1<<"\n";
                    if(matrix[r1][c1]==1)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r2>=0 && c2>=0 && c2<m && r2<n)
                {
                    // cout<<r2<<" "<<c2<<"\n";
                    if(matrix[r2][c2]==1)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r3>=0 && c3>=0 && r3<n && c3<m)
                {
                    // cout<<r3<<" "<<c3<<"\n";
                    if(matrix[r3][c3]==1)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r4>=0 && c4>=0 && r4<n && c4<m)
                {
                    // cout<<r4<<" "<<c4<<"\n";
                    if(matrix[r4][c4]==1)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r5>=0 && c5>=0 && r5<n && c5<m)
                {
                    // cout<<r5<<" "<<c5<<"\n";
                    if(matrix[r5][c5]==1)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r6>=0 && c6>=0 && r6<n && c6<m)
                {
                    // cout<<r6<<" "<<c6<<"\n";
                    if(matrix[r6][c6]==1)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r7>=0 && c7>=0 && r7<n && c7<m)
                {
                    // cout<<r7<<" "<<c7<<"\n";
                    if(matrix[r7][c7]==1)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r8>=0 && c8>=0 && r8<n && c8<m)
                {
                    // cout<<r8<<" "<<c8<<"\n";
                    if(matrix[r8][c8]==1)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(v[i][j]==1)
                {
                    if(a<2 || a>3)
                    {
                        v[i][j]=0;
                    }
                }
                else
                {
                    if(a==3)
                    {
                        v[i][j]=1;
                    }
                }
            }
        }
        matrix=v;
    }
};