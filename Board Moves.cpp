#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    unsigned long long int t,n,i,j,a=8,b,c,d,e,f,g,h,sum=0;
    cin>>t;
    for(j=0;j<t;j++)
    {
        cin>>n;
        b=n/2;
        for(i=1;i<=b;i++)
        {
            sum=sum+(a*i);
            a=a+8;
        }
        cout<<sum<<endl;
        a=8;sum=0;
    }
}
