#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[300005],i,j,b=0,c,d,e,f,g,h;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(i=1;i<=n;i++)
    {
        if(i>a[i])
        {
            b=b+(i-a[i]);
        }
        else if(i<a[i])
        {
            b=b+(a[i]-i);
        }
    }
    cout<<b;
}
