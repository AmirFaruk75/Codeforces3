#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],i,j,b,c,d,e,f=0,g,h,k;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
        b=a[i]+a[i-1];
        if(b>=k)
        {
            continue;
        }
        else{
            c=k-b;
            a[i]=a[i]+c;
            f=f+c;
        }
    }
    cout<<f<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
