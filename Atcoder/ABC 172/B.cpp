#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	string s,t;
	cin>>s>>t;
	int count = 0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]!=t[i])count++;
	}	
	cout<<count;
}