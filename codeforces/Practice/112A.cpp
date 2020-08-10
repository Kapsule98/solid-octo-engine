#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);

    for(int i=0;i<a.length();i++)
    {
        if((int)a[i] < (int)b[i] ){
            cout<<-1<<endl;
            return 0;
        }
        if((int)a[i] > (int)b[i]){
            cout<<1<<endl;
            return 0;
        }
    }
    cout<<0<<endl;
}
