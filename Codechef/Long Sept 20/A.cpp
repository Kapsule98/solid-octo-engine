#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	li t;
	cin>>t;
	while(t--)
	{
		li n;
		cin>>n;
		li a[n];
		for(li i=0;i<n;i++)
		{
			cin>>a[i];
		}
		map<li,li> m;
		for(li i=0;i<n;i++)
		{
			m[a[i]]++;
		}
		if(m.find(0) != m.end())
		{
			cout<<m.size()-1;
		}
		else
		{


		cout<<m.size();
	}	}
}