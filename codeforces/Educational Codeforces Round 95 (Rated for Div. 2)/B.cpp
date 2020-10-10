#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n],l[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			cin>>l[i];
		}
		vector<int>temp;
		for(int i=0;i<n;i++)
		{
			if(l[i] == 0)
			{
				temp.push_back(a[i]);
			}
		}
		sort(temp.rbegin(),temp.rend());
		int k=0;
		for(int i=0;i<temp.size();i++)
		{
			while(l[k] == 1)
			{
				k++;
			}
			a[k] = temp[i];
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}	
}