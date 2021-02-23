#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a,b,i,j,c,d,f,e,g,h;
    cin>>n>>m>>a>>b;
    if((n%m)==0)
    {
        e=n*a;
        c=n/m;
        d=c*b;
        if(e>=d)
        {
            cout<<d;
            return 0;
        }
        else{
            cout<<e;
            return 0;
        }

    }
    else{
        e=n*a;
        c=n/m;
        d=c*m;
        f=n-d;
        g=f*a;
        h=c*b;
        i=g+h;
        int k=h+b;
        if(k<=e && k<=i)
        {
            cout<<k;
            return 0;
        }
        else if(e<=k && e<=i)
        {
            cout<<e;
            return 0;
        }
        else{
            cout<<i;
        }
    }
}
