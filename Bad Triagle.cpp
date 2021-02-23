#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long long int t,n,a[100000],i,j,b,c,d,e,f,g,h;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if((a[0]+a[1])<=a[n-1])
        {
            cout<<1<<" "<<2<<" "<<n<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}
