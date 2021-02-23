#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,m,x,y,i,j,a,b=0,c,d,e,f,g,h;
    cin>>n>>m>>x>>y;
    cout<<x<<" "<<y<<endl;
    for(i=x;i<=x;i++)
    {
        for(j=m;j>0;j--)
        {
            if(y==j)
            {
                continue;
            }
            else{
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(i==x)
        {
            continue;
        }
        else{
            if(b==0)
            {
                for(j=1;j<=m;j++)
                {
                    cout<<i<<" "<<j<<endl;
                }
                b=1;
            }
            else{
                for(j=m;j>0;j--)
                {
                    cout<<i<<" "<<j<<endl;
                }
                b=0;
            }
        }
    }
}
