#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,q;
		cin>>n>>q;
		string s;
		cin>>s;
		for(int i=0;i<q;i++)
		{
			int l,r;
			cin>>l>>r;
			char start = s[l-1];
			char finish = s[r-1];
			bool flag= false;
			for(int i=0;i<l-1;i++)
			{
				if(s[i] == start)
				{
					flag = true;
				}
			}
			for(int i=r;i<s.length();i++)
			{
				if(s[i] == finish)
				{
					flag = true;
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
}
