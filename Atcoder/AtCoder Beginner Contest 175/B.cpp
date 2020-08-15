#include<bits/stdc++.h>
using namespace std;

bool tri(long long int a,long long int b,long long int c)
{
	if(a+b>c && b+c>a && c+a >b)return true;
	else
	{
		return false;
	}
}

int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}	
	int count = 0;
	for(int i=0;i<n-2;i++)
	{
		for(int j=i+1;j<n-1;j++)
		{
			for(int k = j+1;k<n;k++)
			{
				if(tri(a[i],a[j],a[k]) && a[i]!=a[j] && a[i]!=a[k] && a[j]!=a[k])
				{
					count++;
				}
			}
		}
	}
	cout<<count;
}