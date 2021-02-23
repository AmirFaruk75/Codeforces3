#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int na,nb,k,m,a[100000],b[100000],i,j,c,d,e,f,g,h;
    cin>>na>>nb>>k>>m;
    d=nb;
    for(i=1;i<=na;i++)
    {
        cin>>a[i];
        if(i==k)
        {
            c=a[i];
        }
    }
    for(i=1;i<=nb;i++)
    {
        cin>>b[i];
    }
    for(i=1;i<=nb;i++)
    {
        if(b[i]>c)
        {
            d=i-1;
            break;
        }
    }
    e=nb-d;
    if(e>=m)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
