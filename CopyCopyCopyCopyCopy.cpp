#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,a[1000000],i,j,b=0,c,d,e,f,g,h;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        for(j=0;j<n;j++)
        {
            cin>>a[j];
        }
        sort(a,a+n);
        for(j=0;j<n-1;j++)
        {
            if(a[j+1]==a[j])
            {
                b++;
            }
        }
        cout<<n-b<<endl;
        b=0;
    }
}
