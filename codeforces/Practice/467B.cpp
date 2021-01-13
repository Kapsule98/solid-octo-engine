#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int diff(li x,li y)
{
	li k = x^y;
	//cout<<(k&1)<<endl;
	int count = 0;
	while(k)
	{
		if(k&1 == 1)
		{
			count++;
		}
		k = k>>1;
	}
	return count;
}

int main()
{	
	int n,m,k;
	cin>>n>>m>>k;
	li a[m+1];
	int count = 0;
	for(int i=0;i<m+1;i++)
	{
		cin>>a[i];
	}	
	for(int i=0;i<m;i++)
	{
		int d = diff(a[i],a[m]);
		//cout<<d<<endl;
		if(d<=k)
		{
			count++;
		}
	}
	cout<<count<<endl;
	
/*
	//cout<<diff(8,4);
	cout<<diff(3,4);
	cout<<diff(2,4);
	cout<<diff(1,4);
	cout<<diff(4,5);
	*/
}
