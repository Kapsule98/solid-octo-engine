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
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		if((a == c && b+d == a) || (a == d && b+c == a) || (b == c && a+d == b) || (b == d && a+c == b))
		{
			cout<<"Yes\n";
		}
		else
		{
			cout<<"No\n";
		}
	}	
}