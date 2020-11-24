#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	string s;
	cin>>s;
	bool flag = true;
	bool allcaps = true;
	for(int i=0;i<s.length();i++)
	{
		if('a'<=s[i] && s[i]<='z')
		{
			allcaps = false;
		}
	}
	if('a'<=s[0] && s[0]<='z')
	{
		for(int i=1;i<s.length();i++)
		{
			if(!('A'<=s[i] && s[i]<='Z'))
			{
				flag = false;
			}
		}
	}
	else
	{
		for(int i=0;i<s.length();i++)
		{
			if(!('A'<=s[i] && s[i]<='Z'))
			{
				flag = false;
			}
		}
	}
	string ans;
	if(flag)
	{
		if(allcaps)
		{
			ans.push_back(tolower(s[0]));
		}
		else
		{
			ans.push_back(toupper(s[0]));
		}
		
		for(int i=1;i<s.length();i++)
		{
			ans.push_back(tolower(s[i]));
		}
	}
	else
	{
		ans = s;
	}
	cout<<ans;
}
