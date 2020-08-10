#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,len;
	cin>>n>>len;

	for(int i=0;i<n;i++)
	{
		while(len--)
		{
			cout<<1+(rand()%n)<<" ";
		}
		cout<<endl;
	}	
}