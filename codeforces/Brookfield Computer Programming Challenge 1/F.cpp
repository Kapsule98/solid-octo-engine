#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned long long int n,t;
	cin>>t>>n;
	bool m[n+1];
	cout<<n;
/*	for(long long int i=0;i<=n;i++)
	{	
		m[i] = true;
	}
	cout<<"asd";
	while(t--)
	{
		long long int a,b;
		cin>>a>>b;
		for(int i=a;i<=b;i++)
		{
			m[i] = false;
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(m[i])cout<<"true\n";
		else{cout<<"false\n";}
	}
	/*for(int i=1;i<=n;i++)
	{
		if(m[i])
		{
			cout<<i;
		}
	}*/
}