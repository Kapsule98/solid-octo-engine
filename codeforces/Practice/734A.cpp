#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int a=0,d=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i] == 'A')
		{
			a++;
		}
		else
		{
			d++;
		}
	}	
	if(a>d)
	{
		cout<<"Anton"<<endl;
	}
	if(d>a)
	{
		cout<<"Danik\n";
	}
	if(a == d)
	{
		cout<<"Friendship\n";
	}
}

