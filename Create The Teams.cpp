#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,x,a[100005],b,c,d=0,e,f,g,h,i,j=0,k,l;
    cin>>t;
    for(l=0;l<t;l++)
    {
        cin>>n>>x;
        for(i=1;i<=n;i++)
        {
            cin>>a[i];
            if(a[i]>=x)
            {
                d++;
            }
        }
        sort(a+1,a+1+n);
        b=n-d;
        for(i=1;i<=(n-d);i++)
        {
            if(x%a[i]==0)
            {
                k=x/a[i];
            }
            else{
                k=(x/a[i])+1;
            }
            b=b-k;
            if(b<0)
            {
                b=(b+k)-1;
                continue;
            }
            else{
                j++;
                i=i+(k-1);

            }
        }
        cout<<j+d<<endl;
        j=0;d=0;
    }
}
