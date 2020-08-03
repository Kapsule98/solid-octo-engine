#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    k--;
    if(a[k] == 0)
    {
        while(k>=0 && a[k] ==0)
        {
            k--;
        }
        if(a[k] == 0)cout<<0<<endl;
        else cout<<++k<<endl;
    }
    else{
        while(a[k] == a[k+1] && k<n)
        {
            k++;
        }
        cout<<++k<<endl;
    }
}