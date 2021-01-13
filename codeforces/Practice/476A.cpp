#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n,m;
	cin>>n>>m;
	int min = (n+1)/2;
	int max = n;
	bool flag = false;
	for(int i=min;i<=max;i++)
	{
		if(i%m == 0)
		{
			cout<<i<<endl;
			flag = true;
			break;
		}
	}	
	if(!flag)
	{
		cout<<-1<<endl;
	}
}
