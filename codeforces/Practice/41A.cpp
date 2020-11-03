#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	string a,b;
	cin>>a>>b;
	bool flag = true;
	for(int i=0;i<a.length();i++)
	{
		if(a[i] != b[a.length()-i-1])
		{
			flag = false;
		}
	}	
	if(flag)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
