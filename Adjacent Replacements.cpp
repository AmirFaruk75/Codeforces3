#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int n,a[1000000],i,j,b,c,d,e,f,g,h;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]%2==0)
        {
            a[i]=a[i]-1;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
