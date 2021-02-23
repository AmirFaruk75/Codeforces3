#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int t,n,m,i,j,a[10000],b[10000],c,d,e,f,g,h,k,l,sum=0,cum=0;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n>>m;
        if(m>n)
        {
            cout<<0<<endl;
            continue;
        }
        a[1]=m;
        for(i=2;i<=10;i++)
        {
            a[i]=a[1]*i;
        }
        for(i=1;i<=10;i++)
        {
            b[i]=a[i]%10;
            sum=sum+b[i];
        }
        c=n/m;
        d=c/10;
        e=c%10;
        for(i=1;i<=e;i++)
        {
            cum=cum+b[i];
        }
        cout<<((sum*d)+cum)<<endl;
        sum=0;
        cum=0;
    }
}
