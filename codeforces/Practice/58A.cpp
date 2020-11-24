#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	string s;
	cin>>s;
	string ans;
	for(int i=0;i<s.length();i++)
	{
		if(s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o')
		{
			ans.push_back(s[i]);
		}
	}	
	bool flag1 = false,flag2 = false,flag3 = false,flag4 = false,flag5=false;
	int i = 0;
	while(s[i]!= 'h' && i<s.length())
	{
		i++;
	}
	if(s[i] == 'h')
	{
		flag1 = true;
		
		i++;
	}
	while(s[i]!='e' && i<s.length())
	{
		i++;
	}
	if(s[i] == 'e' && flag1)
	{
		flag2 = true;
		i++;
	}
	while(s[i] != 'l' && i<=s.length())
	{
		i++;
	}
	if(s[i] == 'l' && flag2)
	{
		flag3 = true;
		
		i++;
	}
	while(s[i] != 'l' && i<=s.length())
	{
		i++;

	}
	if(s[i] == 'l' && flag3)
	{
		flag4 = true;
		
		i++;
	}
	while(s[i] != 'o' && i<=s.length())
	{
		i++;
	}
	if(s[i] == 'o' && flag4)
	{
		flag5 = true;
		i++;
	}
	if(flag5 && flag1 && flag2 && flag3 && flag4)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
