#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	int aa[a],ab[b];
	for(int i=0;i<a;i++)
	{
		cin>>aa[i];
	}
	for(int i=0;i<b;i++)
	{
		cin>>ab[i];
	}

	int maxa = aa[x-1],minb = ab[b-y];
	if(maxa<minb)cout<<"YES";
	else{cout<<"NO";}

}