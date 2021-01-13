#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	int ans[n];
	unordered_set<int> s;
	for(int i=n-1;i>=0;i--)
	{
		s.insert(a[i]);
		ans[i] = s.size();
	}
	for(int i=0;i<m;i++)
	{
		int x;
		cin>>x;
		cout<<ans[x-1]<<endl;
	}
}
