#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	string s;
	cin>>s;
	int l=0,u=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]<= 'Z' && 'A'<= s[i])
		{
			u++;
		}
		if(s[i]<='z' && 'a'<=s[i])
		{
			l++;
		}
	}	
	assert(l+u == s.length());
	if(l>=u)
		{
			for(int i=0;i<s.length();i++)
			{
				s[i]=tolower(s[i]);
			}
		}
		else
		{
			for(int i=0;i<s.length();i++)
			{
				s[i] = toupper(s[i]);
			}
		}
		cout<<s<<endl;
}
