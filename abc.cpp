#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p[1000],a,b,c=0,d,j;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>p[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=i*1;j<=n;j++)
        {
            if(i==p[j])
            {
                cout<<c<<" ";
                c=0;
                break;
            }
            else{
                c++;
            }
        }
    }
}
