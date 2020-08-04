#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n%7 == 0)
	{
		cout<<(n*2)/7<<" "<<(n*2)/7;
	}	
	else if (n%7 == 1){
		int min = (n/7)*2 , max = (n/7)*2 +1;
		cout<<min<<" "<<max;
	}
	else if(n%7 == 6){
		int min = (n/7)*2 +1 , max = (n/7)*2 +2;
		cout<<min<<" "<<max<<endl;
	}
	else if(n%7 >=2)
	{
		int min = (n/7)*2 , max = (n/7)*2 + 2;
		cout<<min<<" "<<max;
	}
	
}