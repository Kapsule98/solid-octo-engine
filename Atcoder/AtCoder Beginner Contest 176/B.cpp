#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	string s;
	cin>>s;
	ll sum = 0;
	for(int i=0;i<s.length();i++)
	{
		sum+= (int)(s[i]-'0');
	}	
	if(sum % 9 == 0)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
}