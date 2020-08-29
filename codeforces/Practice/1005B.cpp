#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	string s,t;
	cin>>s>>t;
	if(s[s.length()-1] != t[t.length()-1])
	{
		cout<<s.length()+t.length();
	}	
	
	else
	{
		int i = s.length()-1 , j = t.length()-1;
		while(s[i] == t[j] && i>=0 && j>=0)
		{
			i--;
			j--;
		}
		cout<<i+j+2;
	}
}