#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	li t;
	cin>>t;
	while(t--)
	{
		li n;
		cin>>n;
		li temp = n;
		li d = 5;
		li ans = 0;
		while(d<=n)
		{	
			ans+= n/d;
			d*=5;
		}
		cout<<ans<<endl;
	}	
}
