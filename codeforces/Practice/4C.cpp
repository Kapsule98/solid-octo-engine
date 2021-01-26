#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n;
	cin>>n;
	unordered_map<string,int>m;
	while(n--)
	{
		
		string s;
		cin>>s;
		if(m.find(s) != m.end())
		{
			int suffix = m.find(s)->second;
			m[s]++;
			s+= to_string(suffix);
			
			cout<<s<<endl;
		}
		else
		{
			m[s]++;
			cout<<"OK\n";
		}

	}	

}
