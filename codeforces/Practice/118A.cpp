#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	string s;
	cin>>s;
	string ans;
	for(int i=0;i<s.length();i++)
	{
		if(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y' ||
		 	s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')
		{
			//do nothing
		}
		else
		{
			ans.push_back('.');
			ans.push_back(tolower(s[i]));
		}
	}	
	cout<<ans<<endl;
}
