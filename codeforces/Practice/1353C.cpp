#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		li n;
		cin>>n;
		n = (n-1)/2;
		li sum = 0;
		sum = (4*n*(n+1)*(2*n+1))/3;
		cout<<sum<<endl; 
	}	
}
