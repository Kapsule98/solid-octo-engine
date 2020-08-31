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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int f[10] = {0,0,0,0,0,0,0,0,0,0};
		for(int i=0;i<n;i++)
		{
			f[a[i]-1]++;
		}

		map<int,int> m;
		for(int i=0;i<10;i++)
		{
			if(f[i]!=0)
			{
				m[f[i]]++;
			}
			
		}
		int max = -1;
		int maxindex = -1;
		for(auto itr = m.begin();itr!=m.end();itr++)
		{
			if(itr->second > max)
			{
				max = itr->second;
				maxindex = itr->first;
			}
		}
		cout<<maxindex<<endl;
	
	}	
}