#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a[100005],i,j,b=0,c,d,e,f,g,h,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(a[0]==1)
    {
        cout<<-1;
    }
    else{
        cout<<1;
    }
}
