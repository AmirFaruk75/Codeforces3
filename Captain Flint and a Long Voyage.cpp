#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t,n,i,j,a,b,c,d,e,f,g,h;
    cin>>t;
    for(h=0;h<t;h++)
    {
        cin>>n;
        if(n%4==0)
        {
            b=n/4;
        }
        else{
            b=(n/4)+1;
        }
        a=n-b;
        for(i=0;i<a;i++)
        {
            cout<<9;
        }
        for(i=0;i<b;i++)
        {
            cout<<8;
        }
        cout<<endl;
    }
}
