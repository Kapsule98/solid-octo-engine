#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	string num;
	cin>>num;
	bool flag = true;
	int count = 0;
	for(int i=0;i<num.length();i++)
	{
		if(num[i] == '4' || num[i] == '7')
		{
			count++;
		}
	}	
	if(count == 4 || count == 7)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
