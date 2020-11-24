#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li n,t;
		cin>>n>>t;
		li a[n];
		int b[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			b[i] = 3;
		}
		int curr = 0;
		for(int i=0;i<n;i++)
		{
			if(2*a[i]<t)
			{
				b[i] = 0;
			}
			if(2*a[i]>t)
			{
				b[i] = 1;
			}
			if(a[i] == t/2 && t%2 == 0)
			{
				b[i] = curr;
				curr = (curr+1)%2;
			}
		}
		for(int i=0;i<n;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}	
}
