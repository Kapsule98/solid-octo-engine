#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n,m;
	cin>>n>>m;
	int a[m];
	for(int i=0;i<m;i++)
	{
		cin>>a[i];
	}
	li cost = 0;	
	int curr = 1;
	for(int i = 0;i<m;i++)
	{
		int housetovisit = a[i];
		if(housetovisit == curr)
		{
			continue;
		}
		if(housetovisit>curr)
		{
			cost+=housetovisit-curr;
			curr = housetovisit;
		}
		if(housetovisit<curr)
		{
			cost+= n-curr+housetovisit;
			curr = housetovisit;
		}
	}
	cout<<cost<<endl;
}
