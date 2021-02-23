#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a[10000],i;
    for(i=0;i<4;i++)
    {
        cin>>a[i];
    }
    sort(a,a+4);
    int b=a[0]+a[3];
    int c=a[1]+a[2];
    int d=a[0]+a[1]+a[2];
    if(b==c)
    {
        cout<<"YES";
    }
    else if(d==a[3])
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
