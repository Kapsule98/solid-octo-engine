#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	int unique[n];
	for(int i =0;i<n;i++)
	{
		unique[i] =0;
	}
	unique[0] = a[0];
	int i =1,k=1;
	while(i<n)
	{
		if(a[i]!=a[i-1]){unique[k] = a[i];k++;}

		i++;
	}
	if(k<3){
		cout<<"NO\n";
	}
	else
	{
		bool flag = false;
		for(int w =1;w<=k-2;w++)
		{
			if(unique[w-1]+1 == unique[w] && unique[w]+1 == unique[w+1])
			{
				flag = true;
				break;
			}
		}
		if(flag){cout<<"YES\n";}
		else
		{
			cout<<"NO\n";
		}	
	}
	
}