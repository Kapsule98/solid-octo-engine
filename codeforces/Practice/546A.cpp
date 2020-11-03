#include<bits/stdc++.h>
using namespace std;
#define li int64_t
int main()
{
    long long int a,n,money;
    cin>>a>>money>>n;
    long long int cost = a*n*(n+1);
    cost/=2;
    long long int ans = ((cost-money)>0)? (cost-money) : 0;
    cout<< ans;
}


