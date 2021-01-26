#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n;
	cin>>n;
	int even = 0;
	int odd = 0;
	int e,o;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		if(x%2 == 0)
		{
			even++;
			e = i;
		}
		else
		{
			odd++;
			o = i;
		}
	}	
	if(even>odd)
	{
		cout<<o+1<<endl;
	}
	else{
		cout<<e+1<<endl;
	}
}
