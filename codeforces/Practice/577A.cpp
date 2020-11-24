#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n;
	cin>>n;
	li x;
	cin>>x;
	li count = 0;
	
	for(int i=1;i<=min(n,(int)sqrt(x));i++)
	{
		if(x%i == 0 && x/i <= n && i*i != x)
		{
			count+=2;
			//cout<<i<<" "<<x/i<<" "<<endl;
		}
		if(i*i == x)
		{
			count++;
		}
	}	
	cout<<count<<endl;
}
