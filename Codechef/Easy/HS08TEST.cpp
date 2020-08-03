#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// your code goes here
	int Withdraw;
	float Balance;
	cin>>Withdraw>>Balance;
	if(Withdraw %5 == 0 && Withdraw+0.50 <= Balance)
	{
	    cout<<fixed<<setprecision(2)<<Balance - Withdraw - 0.50;
	}
	else
	{
	    cout<<fixed<<setprecision(2)<<Balance;
	}
	return 0;
}
