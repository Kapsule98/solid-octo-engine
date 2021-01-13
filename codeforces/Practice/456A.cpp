#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int n;
	cin>>n;
	bool flag = false;
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
	{
		int price,quality;
		cin>>price>>quality	;
		v.push_back(make_pair(price,quality));
	}
	sort(v.begin(),v.end());
	for(int i=0;i<v.size()-1;i++)
	{
		if(v[i].second > v[i+1].second)
		{
			flag = true;
			break;
		}
	}
	if(flag)
	{
		cout<<"Happy Alex\n";
	}
	else
	{
		cout<<"Poor Alex\n";
	}

}
