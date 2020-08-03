#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s1,s2;
	vector<int> vs1,vs2;
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++)
	{
		vs1.push_back(int(s1[i]));
		vs2.push_back(int(s2[i]));
	}
	sort(vs1.begin(),vs1.end());
	sort(vs2.begin(), vs2.end());
	if(vs1 == vs2)
	{
		cout<<"yep\n";
	}
	else
	{
		cout<<"nope\n";
	}
	
	return 0;

}