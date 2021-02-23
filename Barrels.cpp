#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,k,i,j,a[200005],b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        b=a[n-1];
        for(i=n-2;i>=0;i--)
        {
            if(k==0)
            {
                break;
            }
            else{
                b=b+a[i];
                k--;
            }
        }
        cout<<b<<endl;
    }
}
