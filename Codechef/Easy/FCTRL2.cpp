#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,Factorial;
	
	cin>>t;
	for(int i =0;i<t;i++)
	{
	    Factorial =1;
	    cin>>n;
	    if(n==0 || n==1)
	    {
	        cout<<"1\n";
	    }
	    else
	    {
	        for(int i=2;i<=n;i++)
	        {
	            Factorial = Factorial * i;
	        }
	        cout<<Factorial<<endl;
	    }
	    
	}
	return 0;
}
