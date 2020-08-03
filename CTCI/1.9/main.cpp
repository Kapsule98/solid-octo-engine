#include <iostream>
#include<string>
using namespace std;

bool IsRotation(string a,string b)
{
    if(a.length()!=b.length())
    {
        return false;
    }
    else
    {
        for(int i=0;i<b.length();i++)
        {
            int count =0;
            for(int j=0;j<b.length();j++)
            {
                if(a[j]==b[(j+i)%b.length()])
                {
                    count++;
                }
            }
            if(count == b.length())
            {
                return true;
            }
        }
        return false;
    }
}

int main()
{
    string a,b;
    getline(cin,a);
    getline(cin,b);
    if(IsRotation(a,b))
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
