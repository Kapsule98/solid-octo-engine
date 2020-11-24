#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int s,n;
	cin>>s>>n;
	int strength[n],bonus[n];
	for(int i=0;i<n;i++)
	{
		cin>>strength[i]>>bonus[i];
	}	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(strength[j]>strength[j+1])
			{
				int temp = strength[j];
				strength[j] = strength[j+1];
				strength[j+1] = temp;
				temp = bonus[j];
				bonus[j] = bonus[j+1];
				bonus[j+1] = temp;
			}
		}
	}
	
	bool flag = true;
	for(int i=0;i<n;i++)
	{
		if(s<=strength[i])
		{
			flag = false;
			break;
		}
		else
		{
			s+=bonus[i];
		}

	}
	if(flag)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
}
