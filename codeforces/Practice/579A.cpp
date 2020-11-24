#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	li n;
	cin>>n;
	int count = 0;
	while(n)
	{
		if(n&1 == 1)
		{
			count++;
		}
		n = n>>1;
	}	
	cout<<count<<endl;
}
