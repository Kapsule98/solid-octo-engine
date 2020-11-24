#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	int a,b,c,neta=0,netb=0,netc=0;
	while(t--)
	{
		
		cin>>a>>b>>c;
		neta+=a;
		netb+=b;
		netc+=c;
	}	
	if(neta == 0 && netb == 0 && netc == 0)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
