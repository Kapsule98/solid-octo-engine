#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int n;
	cin>>n;
	pair<li,li> a[n];
	for(int i=0;i<n;i++)
	{
		li x,y;
		cin>>x>>y;
		a[i] = make_pair(x,y);
	}
	li maxdist = -1;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			li dist = abs(a[i].first - a[j].first) + abs(a[i].second - a[j].second);
			if(dist>maxdist)maxdist = dist;
		}
	}
	cout<<maxdist;
}