#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count =0;
    int solved =0;
    int x,y,z;
    while(n--)
    {
        count =0;
        cin>>x>>y>>z;
        if(x == 1)count++;
        if(y == 1)count++;
        if(z == 1) count++;
        if(count >1)solved++;
    }
    cout<<solved;
}