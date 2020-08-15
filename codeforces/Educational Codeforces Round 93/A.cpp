#include<bits/stdc++.h>
using namespace std;

bool isPossible(long long int a,long long int b,long long int c)
{
	
	if(a+b<=c || a+c<=b || c+b<=a)
	{
		return false;
	}
	else
	{
		return true;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		long long int a[n];
		for(long long int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(isPossible(a[0],a[1],a[n-1]))
		{
			cout<<"-1\n";
		}
		else
		{
			cout<<1<<" "<<2<<" "<<n<<endl;
		}

	}
}	