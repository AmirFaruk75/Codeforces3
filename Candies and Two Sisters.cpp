#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,n,i,j,a,b,c=0,d=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n==1 || n==2)
        {
            cout<<0<<endl;
            continue;
        }
        if(n%2==0)
        {
            cout<<(n/2)-1<<endl;
            continue;
        }
        else{
            cout<<n/2<<endl;
            continue;
        }
    }
}
