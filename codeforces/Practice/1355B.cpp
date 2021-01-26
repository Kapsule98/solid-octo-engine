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
		sort(a,a+n);
		int count = 0;
		int group = 0;
		for(int i=0;i<n;i++)
		{
			count++;
			if(a[i]<=count)
			{
				group++;
				count =0;
			}
		}
		cout<<group<<endl;
	}	
}
