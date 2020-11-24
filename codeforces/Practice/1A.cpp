#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	li n,m,a;
	cin>>n>>m>>a;
	li l,b;
	if(n%a == 0)
	{
		l = n/a;
	}	
	else
	{
		l = (n/a)+1;
	}
	if(m%a == 0)
	{
		b = m/a;
	}
	else
	{
		b = 1+(m/a);
	}
	cout<<l*b<<endl;
}
