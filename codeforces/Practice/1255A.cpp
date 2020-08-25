#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int a,b;
	cin>>a>>b;
	if(a == 9 && b == 1)
	{
		cout<<9<<" "<<10;
	}
	else if(a == b)
	{
		a*=10;
		a++;
		b*=10;
		b+=2;
		cout<<a<<" "<<b;
	}	
	else if(a+1 == b)
	{
		a*=10;
		a+=9;
		b*=10;
		cout<<a<<" "<<b;
	}
	else
	{
		cout<<-1;
	}
}