#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[10000],b[10000],i,j,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    c=a[n-1];
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);
    d=b[m-1];
    cout<<c<<" "<<d;
}
