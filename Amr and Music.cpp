#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,k,a[100000],b[100000],c=0,d,e,f,g,h,i,j,sum=0;
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1,b+n+1);
    for(i=1;i<=n;i++)
    {
        sum=sum+b[i];
        if(sum==k)
        {
            c++;
            break;
        }
        else if(sum>k)
        {
            break;
        }
        else{
            c++;
        }
    }
    cout<<c<<endl;
    for(i=1;i<=c;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[j]>100)
            {
                continue;
            }
            if(b[i]==a[j])
            {
                cout<<j<<" ";
                a[j]=a[j]+100;
                break;
            }
        }
    }
}
