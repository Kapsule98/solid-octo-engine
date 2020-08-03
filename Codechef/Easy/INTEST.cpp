#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int k,n,count,number;
	cin>>n>>k;
	count =0;
	for(int i =0;i<n;i++)
	{
	    cin>>number;
	    if(number%k==0)
	    {
	        count++;
	    }
	}
	cout<<count<<endl;
	return 0;
}
