#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,p;
		cin>>s>>p;
		int alps[26],alpp[26];
		for(int i=0;i<26;i++)
		{
			alps[i] = 0;
			alpp[i] = 0;
		}
		
		for(int i=0;i<s.length();i++)
		{
			alps[int(s[i]-'a')]++;
		}
		for(int i=0;i<p.length();i++)
		{
			alpp[int(p[i]-'a')]++;
		}
		
		for(int i=0;i<26;i++)
		{
			alps[i] = alps[i]-alpp[i];
		}
		string sp = "";
		for(int i=0;i<26;i++)
		{
			while(alps[i]--)
			{
				sp.push_back(char(i+'a'));
			}
		}
		
		int index = -1;
		for(int i=0;i<sp.length();i++)
		{
			if(int(sp[i])>(int)p[0])
			{
				index = i;
				break;
			}
		}
		string ans = "";
		if(index == -1)
		{
			ans.append(sp);
			ans.append(p);
		}
		else
		{
			for(int i=0;i<index;i++)
			{
				ans.push_back(sp[i]);
			}
			for(int i=0;i<p.length();i++)
			{
				ans.push_back(p[i]);
			}
			for(int i=index;i<sp.length();i++)
			{
				ans.push_back(sp[i]);
			}
		}
		cout<<ans<<endl;
		

	}	
}