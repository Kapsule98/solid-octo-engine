#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int count =0;
	int max = 0;
	int i=0;
	while(i<s.length())
	{
		if(s[i] == 'R')
		{
			count++;
			while(s[i+1] == 'R')
			{
				count++;
				i++;
			}
			if(count>=max)max = count;
			i++;
		}
		else
		{
			count = 0;
			i++;
		}

	}
	cout<<max;
}