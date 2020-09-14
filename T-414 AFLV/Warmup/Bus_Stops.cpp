#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	a[n] = INT_MAX;
	sort(a,a+n+1);
	for(int i=0;i<n-1;i++)
	{
		int count = 0;
		int start = -1,end = -1;
		while(a[i] + 1 == a[i+1])
		{
			
			i++;
			count++;
		}
		end = a[i];
		start = a[i-count];
		if(count>=2)
		{
			cout<<start<<"-"<<end<<" ";
		}
		else
		{
			cout<<a[i]<<" ";
		}
	}
}

