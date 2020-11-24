#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		string s;
		cin>>n>>s;
		int bal = 0;
		int count = 0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i] == '(')
			{
				bal++;
			}
			else
			{
				bal--;
				if(bal<0)
				{
					count++;
					bal = 0;
				}
			}
		}
		cout<<count<<endl;
	}	
}
