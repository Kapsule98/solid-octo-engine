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
		int a,b,c,n;
		cin>>a>>b>>n;
		c = a^b;
		
		if(n%3 == 0)cout<<a<<endl;
		else if(n%3 == 1)cout<<b<<endl;
		else{
			cout<<c<<endl;
		}
	}	
}