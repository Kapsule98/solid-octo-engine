#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n,money;
    cin>>a>>money>>n;
    int cost = a*n*(n+1);
    cost/=2;
    cout<<cost-money;
}