#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if(a == b && a == 0)
	{
		cout<<"NO";
	}
	else
	{
	int diff = abs(a-b);	
	if(diff>1)cout<<"NO";
	else{cout<<"YES";}
}
}