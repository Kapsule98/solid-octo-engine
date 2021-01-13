#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li m,n,r,c;
		cin>>n>>m>>r>>c;
		li ans = max(abs(r-1)+abs(c-1) , abs(r-1)+abs(c-m));
		ans = max(ans,abs(r-n)+abs(c-1));
		ans = max(ans,abs(r-n)+abs(c-m));
		cout<<ans<<endl;
	}	
}
