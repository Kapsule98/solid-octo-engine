#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n,count =0,max = -1,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        count+=b;
        count-=a;
        if(count>max)max = count;
    }
    cout<<max;
}