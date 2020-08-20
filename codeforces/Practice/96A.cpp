#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	string s;
	cin>>s;
	bool flag = false;
	int i = 0;
	int count = 0;
	while(i<s.length())
	{
		if(s[i] == '1')
		{
			count = 0;
			while(s[i+1] == '1')
			{
				i++;
				count++;
				if(count>=6){
					flag = true;
					break;
				}
			}
		}
		if(s[i] == '0')
		{
			count = 0;
			while(s[i+1] == '0')
			{
				i++;
				count++;
				if(count>=6)
				{
					flag = true;
					break;
				}
			}
		}
		i++;
	}
	if(flag)cout<<"YES";
	else
	{
		cout<<"NO";
	}
}