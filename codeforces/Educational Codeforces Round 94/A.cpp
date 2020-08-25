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
		int n;
		cin>>n;
		string s;
		cin>>s;
		string a = "";
		for(int i=0;i<s.length();i+=2)
		{
			a.push_back(s[i]);
		}
		cout<<a<<endl;
	}	
}