#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	li a,b,c,d;
	cin>>a>>b>>c>>d;
	if((c<=b && a<=d)||(c<=a && a<=d))
	{
		cout<<"Yes";
	}	
	else
	{
		cout<<"No";
	}
}