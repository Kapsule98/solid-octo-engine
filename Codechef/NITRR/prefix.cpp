#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int k,x;
		cin>>k>>x;
		int i = 0;
		int ans = 0;
		unordered_map<char,int> m;
		while(i<s.length())
		{
			//cout<<i<<" ";
			m[s[i]]++;
			int o = m.find(s[i])->second;
			//cout<<s[i]<<" = "<<o<<endl;
			if(o>x && k<=0)
			{
				break;
			}
			else if(o<=x)
			{
				ans++;
			}
			else if(o>x && k>0)
			{
				//ans++;
				k--;
				cout<<"i = "<<i<<"k = "<<k<<endl;
			}
			else
			{
				//no op
			}
			i++;

		}
		cout<<ans<<endl;
	}	
}
