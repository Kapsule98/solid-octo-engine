#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		getline(cin,a);
		getline(cin,b);
		string item1,item2;
		item1 = a.substr(9,a.length()-9);
		item2 = b.substr(9,a.length()-9);
		cout<<"Uh! "<<item2<<"-"<<item1<<"!\n";
	}	
}