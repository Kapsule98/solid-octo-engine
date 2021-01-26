#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		int n;
		cin>>n;
		string c = "";
		for(int i=0;i<n;i++)
		{
			string x;
			cin>>x;
			c =  c+x;
		}
		int al[26];
		int ch[26];
		for(int i=0;i<26;i++)
		{
			al[i] = 0;
			ch[i] = 0;
		}
		for(int i=0;i<a.length();i++)
		{
			al[a[i]-'a']++;
		}
		for(int i=0;i<b.length();i++)
		{
			al[b[i]-'a']++;
		}
		bool flag = true;

		for(int i=0;i<c.length();i++)
		{
			ch[c[i]-'a']++;
		}
		for(int i=0;i<26;i++)
		{
			if(ch[i]>al[i])
			{
				flag = false;
				break;
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
}
