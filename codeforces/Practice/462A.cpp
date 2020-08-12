#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	char a[n][n];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}	
	bool flag =true;
	int count =0;
	for(int i=1;i<n-1;i++)
	{
		for(int j=1;j<n-1;j++)
		{
			count =0;
			if(a[i-1][j] == 'o')count++;
			if(a[i+1][j] == 'o')count++;
			if(a[i][j+1] == 'o')count++; 
			if(a[i][j-1] == 'o')count++;
			if(count %2 != 0)flag = false;
		}
	}
	if(!flag){cout<<"NO";
	return 0;
	}
	else
	{
		for(int j=1;j<n-1;j++)
		{
			count =0;
			if(a[1][j] == 'o')count++;
			if(a[0][j+1] == 'o')count++; 
			if(a[0][j-1] == 'o')count++;
			if(count%2 !=0)flag = false;
			count =0;
			if(a[n-2][j] == 'o')count++;
			if(a[n-1][j+1] == 'o')count++; 
			if(a[n-1][j-1] == 'o')count++;
			if(count%2 !=0)flag = false;

		}
		for(int i=1;i<n-1;i++)
		{
			count =0;
			if(a[i-1][0] == 'o')count++;
			if(a[i][1] == 'o')count++;
			if(a[i+1][0] == 'o')count++;
			if(count%2!=0)flag = false;
			count=0;
			if(a[i-1][n-1] == 'o')count++;
			if(a[i][n-2] == 'o')count++;
			if(a[i+1][n-1] == 'o')count++;
			if(count%2!=0)flag = false;

		}
		if(n == 1)
		{
			cout<<"YES";
		}
		else
		{
			count =0;
			if(a[0][1] == 'o')count++;
			if(a[1][0] == 'o')count++;
			if(count%2!=0)flag = false;
			count =0;
			if(a[0][n-2] == 'o')count++;
			if(a[1][n-1] == 'o')count++;
			if(count%2!=0)flag = false;
			count =0;
			if(a[n-2][0] == 'o')count++;
			if(a[n-1][1] == 'o')count++;
			if(count%2!=0)flag = false;
			count =0;
			if(a[n-2][n-1] == 'o')count++;
			if(a[n-1][n-2] == 'o')count++;
			if(count%2!=0)flag = false;
			if(flag)
			{
				cout<<"YES";
			}
			else
			{
				cout<<"NO";
			}
		}
		
	}
}
