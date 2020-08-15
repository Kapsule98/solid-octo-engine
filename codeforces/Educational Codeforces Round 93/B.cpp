#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		s.push_back('0');
		int count = 0;
		vector<int>a;
		int i=0;
		while(i<s.length())
		{
			if(s[i] == '0')
			{
				count =0;
				//continue;
			}
			if(s[i] == '1')
			{
				while(s[i+1] == '1')
				{
					count++;
					i++;
				}
				count++;
				a.push_back(count);
				
			}
			i++;
		}
		sort(a.begin(),a.end());
		int ans = 0;

		
		for(int k=a.size()-1;k>=0;k-=2)
		{
			ans+=a[k];
		}
		cout<<ans<<endl;
		
	}
}	

