#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int count = 0;
		int sq = 0,rn = 0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i] == '(')
			{
				rn++;
			}
			if(s[i] == ')' && rn>0)
			{
				count++;
				rn--;
			}
			if(s[i] == '[' )
			{
				sq++;
			}
			if(s[i] == ']' && sq>0)
			{
				sq--;
				count++;
			}
		}
		cout<<count<<endl;
	}	
}
