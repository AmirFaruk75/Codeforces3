#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,t[10000],i,j,a,b=0,c,e,f,g,h;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(i=0;i<n-1;i++)
    {
        d=d-(t[i]+10);
        b=b+2;
    }
    a=d-t[n-1];
    if(a<0)
    {
        cout<<-1;
    }
    else{
        c=a/5;
        cout<<b+c;
    }
}
