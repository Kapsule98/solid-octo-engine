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
		li a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				//if i is even j is even - white (even)
				if(i%2 == 0)
				{
					if(j%2 == 0)
					{
						//even
						if(a[i][j] % 2 != 0)
						{
							a[i][j]++;
						}
					}
					if(j%2 == 1)
					{
						if(a[i][j] % 2 == 0)
						{
							a[i][j]++;
						}
					}
				}
				else
				{
					if(j%2 == 0)
					{
						//even
						if(a[i][j] % 2 == 0)
						{
							a[i][j]++;
						}
					}
					if(j%2 == 1)
					{
						if(a[i][j] % 2 != 0)
						{
							a[i][j]++;
						}
					}

				}
				
			}
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<endl;
		}

	}	
}
