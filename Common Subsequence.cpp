#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,m,a[100000],b[100000],c=0,d,e,f,g,h,i,j,k;
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>n>>m;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(j=0;j<m;j++)
        {
            cin>>b[j];
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i]==b[j])
                {
                    cout<<"YES"<<endl;
                    cout<<1<<" "<<a[i]<<endl;
                    c=1;
                    break;
                }
            }
            if(c==1)
            {
                break;
            }
        }
        if(c==0)
        {
            cout<<"NO"<<endl;
        }
        c=0;
    }
}
