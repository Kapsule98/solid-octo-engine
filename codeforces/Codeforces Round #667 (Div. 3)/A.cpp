#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li a,b;
		cin>>a>>b;
		li diff = abs(a-b);
		if(diff % 10 == 0){
		cout<<diff/10<<endl;
		}
		else
		{
			cout<<diff/10 + 1<<endl;
		}
	}	
}