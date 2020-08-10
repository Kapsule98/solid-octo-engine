#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,p,h;
	cin>>t;
	while(t--)
	{
		cin>>h>>p;
		long long int sum =0;
		while(p>0)
		{
			sum+=p;
			p/=2;
		}
		if(sum>=h)
		{
			cout<<1<<endl;
		}
		else
		{
			cout<<0<<endl;
		}
	}	
}