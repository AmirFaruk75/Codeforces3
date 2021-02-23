#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100000],b[100000],c[100000],i,j,k=0,d=0,e=0,f;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        k=k+a[i];
    }
    for(j=0;j<n-1;j++)
    {
        cin>>b[j];
        d=d+b[j];
    }
    for(f=0;f<n-2;f++)
    {
        cin>>c[f];
        e=e+c[f];
    }
    cout<<k-d<<endl;
    cout<<d-e;
}
