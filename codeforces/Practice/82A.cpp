#include<bits/stdc++.h>
using namespace std;

#define li int64_t

int main()
{
	li n;
	cin>>n;
	int i =0;
	while(5*pow(2,i)<n)
	{
		n -= 5*pow(2,i);
		i++;
	}	
	li ans;
	li k = pow(2,i);
	if(n % k == 0)
	{
		ans = (n/k)-1;
	}
	else
	{
		ans = n/k;
	}
	
	if(ans == 0){
		cout<<"Sheldon\n";
	}
	if(ans == 1)
	{
		cout<<"Leonard\n";
	}
	if(ans == 2)
	{
		cout<<"Penny\n";
	}
	if(ans == 3)
	{
		cout<<"Rajesh\n";
	}
	if(ans == 4)
	{
		cout<<"Howard\n";
	}
}
