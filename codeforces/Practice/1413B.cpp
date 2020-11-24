#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int row[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>row[i][j];
			}
		}
		int col[m][n];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>col[i][j];
			}
		}
		int ans[n][m];
		for(int i=0;i<n;i++)
		{
			int x = row[i][0];
			int index = -1;
			for(int j=0;j<m;j++)
			{
				for(int k=0;k<n;k++)
				{
					if(col[j][k] == x)
					{
						index = k;
					}
				}
			}
			for(int j=0;j<m;j++)
			{
				ans[index][j] = row[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}
	
	}	
}
