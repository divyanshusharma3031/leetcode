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
                    if(matrix[r1][c1]==1 || matrix[r1][c1]==2)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r2>=0 && c2>=0 && c2<m && r2<n)
                {
                    if(matrix[r2][c2]==1 || matrix[r2][c2]==2)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r3>=0 && c3>=0 && r3<n && c3<m)
                {
                    if(matrix[r3][c3]==1 || matrix[r3][c3]==2)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r4>=0 && c4>=0 && r4<n && c4<m)
                {
                    if(matrix[r4][c4]==1 || matrix[r4][c4]==2)
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
                    if(matrix[r5][c5]==1 || matrix[r5][c5]==2)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r6>=0 && c6>=0 && r6<n && c6<m)
                {
                    if(matrix[r6][c6]==1 || matrix[r6][c6]==2)
                    {
                        a++;
                    }
                    else
                    {
                        
                    }
                }
                if(r7>=0 && c7>=0 && r7<n && c7<m)
                {
                    if(matrix[r7][c7]==1 || matrix[r7][c7]==2)
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
                    if(matrix[r8][c8]==1 || matrix[r8][c8]==2)
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
                        matrix[i][j]=2;//newly dead.
                    }
                }
                else
                {
                    if(a==3)
                    {
                        matrix[i][j]=3;//newly alive;
                    }
                }
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                matrix[i][j]=matrix[i][j]%2;
            }
        }
    }
};