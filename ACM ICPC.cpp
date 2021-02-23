#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int a[10000],b,c,d,e,f,g,h,i,j;
    for(i=1;i<=6;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+6);
    if((a[1]+a[2]+a[6])==(a[3]+a[4]+a[5]))
    {
        cout<<"YES";
    }
    else if((a[1]+a[3]+a[6])==(a[2]+a[4]+a[5]))
        {
            cout<<"YES";
        }
    else if((a[1]+a[4]+a[6])==(a[2]+a[3]+a[5]))
        {
            cout<<"YES";
        }
        else if((a[1]+a[5]+a[6])==(a[3]+a[2]+a[4]))
        {
            cout<<"YES";
        }
        else if((a[1]+a[4]+a[5])==(a[2]+a[3]+a[6]))
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
}
