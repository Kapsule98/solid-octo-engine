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
		int alpha[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		for(int i=0;i<n;i++)
		{
			cin>>s;
			for(int j=0;j<s.length();j++)
			{
				alpha[s[j]-'a']++;
			}
		}
		bool flag = true;
		for(int i=0;i<26;i++)
		{
			if(alpha[i]%n !=0)
			{
				flag = false;
			}
		}
		if(flag){
			cout<<"YES\n";
		}
		else
		{
			cout<<"NO\n";
		}
	}	
}