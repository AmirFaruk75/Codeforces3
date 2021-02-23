#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100005],i,j,b,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(n==2)
    {
        cout<<0;
    }
    else{
        sort(a,a+n);
        b=a[n-2]-a[0];
        c=a[n-1]-a[1];
        if(b<=c)
        {
            cout<<b;
        }
        else{
            cout<<c;
        }
    }
}
