#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a,b,d,e,f,g,h,rem;
    char c[2005],w;
    string s;
    cin>>t;
    for(h=0;h<t;h++)
    {
        cin>>n>>a>>b;
        c[0]='a';
        cout<<c[0];
        for(i=1;i<b;i++)
        {
            c[i]=c[0]+i;
            cout<<c[i];
        }
        for(i=b;i<a;i++)
        {
            c[i]=c[0];
            cout<<c[i];
        }
        d=n/a;
        e=d-1;
        rem=n%a;
        for(j=1;j<=e;j++)
        {
            for(i=0;i<a;i++)
            {
                cout<<c[i];
            }
        }
        for(i=0;i<rem;i++)
        {
            cout<<c[i];
        }
        cout<<endl;
    }
}
