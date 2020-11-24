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
		int size = 0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i] == 'B' && size>0)
			{
				size--;
			}
			else
			{
				size++;
			}
		}
		cout<<size<<endl;
	}
}
