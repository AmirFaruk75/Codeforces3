#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,a2,a3,a4,n,i,j,b,c=0,d;
    string s;
    cin>>a1>>a2>>a3>>a4;
    cin>>s;
    b=s.length();
    for(i=0;i<b;i++)
    {
        if(s[i]=='1')
        {
            c=c+a1;
        }
        else if(s[i]=='2')
        {
            c=c+a2;
        }
        else if(s[i]=='3')
        {
            c=c+a3;
        }
        else{
            c=c+a4;
        }
    }
    cout<<c;
}
