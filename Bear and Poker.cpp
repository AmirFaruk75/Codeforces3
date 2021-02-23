#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,a[200005],i,j,b,c=0,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;;j++)
        {
            if(a[i]%2==0)
            {
                a[i]=a[i]/2;
            }
            else if(a[i]%3==0)
            {
                a[i]=a[i]/3;
            }
            else{
                break;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            c=1;
            break;
        }
    }
    if(c==0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
