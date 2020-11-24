#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	int ans = a+b+c;
	ans = max(ans,(a+b)*c);
	ans = max(ans,a+b*c);
	ans = max(ans,a*b+c);
	ans = max(ans,a*(b+c));
	ans = max(ans,a*b*c);
	cout<<ans;	
}
