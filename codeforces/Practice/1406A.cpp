#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int count[101];
		for(int i=0;i<=100;i++)
		{
			count[i]=0;
		}
		for(int i=0;i<n;i++)
		{
			count[a[i]]++;
		}
		int c = -1,b = -1;
		for(int i=0;i<=100;i++)
		{
		
			if(count[i] == 0)
			{
				c = i;
			
				break;
			}
		}
		for(int i=0;i<=100;i++)
		{
			if(count[i]<=1)
			{
				b = i;
				//cout<<b<<" ";
				break;
			}
		}
		cout<<c+b<<endl;
	}	
}
