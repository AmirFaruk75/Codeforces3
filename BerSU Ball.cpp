#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100000],m,b[100000],i,j,c=0,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    cin>>m;
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    sort(b,b+m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(b[j]==0)
            {
                continue;
            }
            else{
                if(a[i]-b[j]==1 || a[i]-b[j]==-1 || a[i]-b[j]==0)
                {
                    c++;
                    b[j]=b[j]-b[j];
                    break;
                }
                else{
                    continue;
                }
            }
        }
    }
    cout<<c;
}
