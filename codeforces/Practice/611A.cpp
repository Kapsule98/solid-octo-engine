#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	string s;
	getline(cin,s);
	if(s[s.length()-1] == 'h')
	{
		int n = (int)(s[0]-'0');
		if(s[1]>= '0' && s[1]<='9')
		{
			n*=10;
			n+= (int)(s[1]-'0');
		}
		if(n == 31)
		{
			cout<<7;
		}
		else if(n == 30)
		{
			cout<<11;
		}
		else{
			cout<<12<<endl;
		}
	}	
	else
	{
		if(s[0] == '5' || s[0] == '6')
		{
				cout<<53<<endl;
		}
		else
		{
			cout<<52<<endl;
		}
	}
}