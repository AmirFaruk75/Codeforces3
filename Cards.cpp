#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],i,j,b[100000],c,d,e,f,g,h;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a+1,a+1+n);
    for(i=1;i<=n/2;i++)
    {
        for(j=1;i<=n;j++)
        {
            if(b[j]==0)
            {
                continue;
            }
            if(a[i]==b[j])
            {
                cout<<j<<" ";
                b[j]=0;
                break;
            }
        }
        for(int k=1;k<=n;k++)
        {
            if(b[k]==0)
            {
                continue;
            }
            if(a[(n-i)+1]==b[k])
            {
                cout<<k<<endl;
                b[k]=0;
                break;
            }
        }
    }
}
