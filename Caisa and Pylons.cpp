#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,h[100000],i,j,a,b,c,d,e,f,g;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>h[i];
    }
    sort(h,h+n);
    cout<<h[n-1];
}
