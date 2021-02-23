#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[10000],i,j,b=0,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]==a[0])
            {
                b++;
            }
            else{
                break;
            }
        }
        cout<<n-b<<endl;
        b=0;
    }
}
