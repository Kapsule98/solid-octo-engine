#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		char a[n];
		bool s[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			s[i] = false;
		}
		int ans[n];
		char cur = a[0] ;
		int currindex = 1;
		int taken =1;
		int i =1;
		ans[0] =1;
		s[0] = true;
		while(taken !=n)
		{
			if(a[i]!=cur && s[i] == false)
			{
				taken++;
				s[i] = true;
				ans[i] = currindex;
				curr = a[i];
				i++;
			}
			elseif()
		}

	}	
}