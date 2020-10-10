#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		li a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		li suffix[n];
		suffix[n-1] = a[n-1];
		for(int i=n-2;i>=0;i--)
		{
			suffix[i] = suffix[i+1]+a[i];
		}
		li max = -1;
		for(int i=0;i<n;i++)
		{
			if(suffix[i]>max)
			{
				max = suffix[i];
			}
		}
		cout<<max<<endl;
	}	
}