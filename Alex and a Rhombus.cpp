#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,i,a=1,b,sum=0;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
        sum=sum+a;
        a=a+2;
    }
    b=sum*2;
    cout<<b+a;
}
