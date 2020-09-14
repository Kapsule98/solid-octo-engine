#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	string s,t;
	cin>>s>>t;
	int max = -1;
	for(int i=0;i<=s.length()-t.length();i++)
	{
		int count = 0;
		for(int j = 0;j<t.length();j++)
		{
			if(t[j] == s[i+j])
			{
				count++;
			}
		}
		if(count>max)max = count;
	}	
	cout<<t.length()-max;
}