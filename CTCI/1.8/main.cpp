#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int matrix[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            int k;
            cin>>k;
            if(k!=0)
            {
                matrix[i][j] = k;
            }
            else
            {
                matrix[i][j] = -1;
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(matrix[i][j] == -1)
            {
                matrix[i][j] = 0;
                for(int x=0;x<m;x++)
                {
                    if(matrix[x][j]!=-1)
                    {
                        matrix[x][j]=0;
                    }
                }
                for(int y=0;y<n;y++)
                {
                    if(matrix[i][y]!=-1)
                    {
                        matrix[i][y]=0;
                    }
                }
            }
        }
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
