#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	int t;
	cin>>t;
	vector<int> time;
	while(t--)
	{
		int hr,min;
		cin>>hr>>min;
		time.push_back(hr*60+min);
	}	
	sort(time.begin(),time.end());
		int maxcount = -1;
		for(int i=0;i<time.size();i++)
		{
			int count = 0;
			while(time[i] == time[i+1] && i<time.size()-1)
			{
				count++;
				i++;
			}
			if(count>maxcount)
			{
				maxcount = count;
			}
		}
		cout<<maxcount+1<<endl;
}
